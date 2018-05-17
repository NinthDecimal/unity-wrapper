//
//  KiipBinding.m
//  Unity-iPhone
//
//  Created by Mike Desaro on 11/6/12.
//
//

#import "KiipManager.h"
#import "KiipSDK.h"


// Converts NSString to C style string by way of copy (Mono will free it)
#define MakeStringCopy( _x_ ) ( _x_ != NULL && [_x_ isKindOfClass:[NSString class]] ) ? strdup( [_x_ UTF8String] ) : NULL

// Converts C style string to NSString
#define GetStringParam( _x_ ) ( _x_ != NULL ) ? [NSString stringWithUTF8String:_x_] : [NSString stringWithUTF8String:""]

// Converts C style string to NSString as long as it isnt empty
#define GetStringParamOrNil( _x_ ) ( _x_ != NULL && strlen( _x_ ) ) ? [NSString stringWithUTF8String:_x_] : nil



void _kiipInit( const char * appKey, const char * appSecret )
{
	[Kiip initWithAppKey:GetStringParam( appKey ) andSecret:GetStringParam( appSecret )];
    [[Kiip sharedInstance] setDelegate:[KiipManager sharedManager]];
}


void _kiipSaveMoment( const char * momentId, double val )
{
	[[KiipManager sharedManager] saveMoment:GetStringParam( momentId ) value:val];
}

void _kiipShowPoptart()
{
	[[KiipManager sharedManager] showRemotePoptart];
}

void _kiipSetShouldAutorotate( bool shouldAutorotate )
{
	Kiip *kiip = [Kiip sharedInstance];
    kiip.shouldAutoRotate = shouldAutorotate;
}

void _kiipSetTestMode( bool testMode )
{
    [[Kiip sharedInstance] setTestMode:testMode];
}


void _kiipSetInterfaceOrientation( int orientation )
{
	Kiip *kiip = [Kiip sharedInstance];
    kiip.interfaceOrientation = (UIInterfaceOrientation)orientation;
}


void _kiipSetEmail( const char * email )
{
	Kiip *kiip = [Kiip sharedInstance];
    kiip.email = GetStringParam( email );
}

void _kiipSetGender( const char * gender )
{
	Kiip *kiip = [Kiip sharedInstance];
    kiip.gender = GetStringParam( gender );
}


void _kiipSetBirthday( int birthday )
{
	NSDate *date = [NSDate dateWithTimeIntervalSince1970:birthday];
	Kiip *kiip = [Kiip sharedInstance];
    kiip.birthday = date;
}


void _kiipSetAgeGroup( int ageGroup )
{
    Kiip *kiip = [Kiip sharedInstance];
    kiip.agegroup = ageGroup;
}

