/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <coreauthd/LABiometricClient.h>

@class TouchIdPrearmContext;

@interface PrearmBiometryClient : NSObject <LABiometricClient> {

	TouchIdPrearmContext* _prearmContext;

}

@property (assign,nonatomic,__weak) TouchIdPrearmContext * prearmContext;              //@synthesize prearmContext=_prearmContext - In the implementation block
-(id)initWithPrearmContext:(id)arg1 ;
-(TouchIdPrearmContext *)prearmContext;
-(void)setPrearmContext:(TouchIdPrearmContext *)arg1 ;
-(void)biometryLost;
-(void)matchResult:(id)arg1 ;
-(void)statusMessage:(int)arg1 ;
@end

