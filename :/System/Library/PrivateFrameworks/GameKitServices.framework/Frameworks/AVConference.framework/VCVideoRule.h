/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:51 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCVideoRule : NSObject {

	int iWidth;
	int iHeight;
	float fRate;
	float fPref;
	int iPayload;

}

@property (assign) int iWidth; 
@property (assign) int iHeight; 
@property (assign) float fRate; 
@property (assign) float fPref; 
@property (assign) int iPayload; 
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 payload:(int)arg4 ;
-(int)iWidth;
-(int)iHeight;
-(float)fRate;
-(float)fPref;
-(int)iPayload;
-(void)setIWidth:(int)arg1 ;
-(void)setIHeight:(int)arg1 ;
-(void)setFRate:(float)arg1 ;
-(id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 ;
-(void)setToVideoRule:(id)arg1 ;
-(void)setFPref:(float)arg1 ;
-(void)setIPayload:(int)arg1 ;
-(id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 pref:(float)arg4 ;
-(long long)compareByPref:(id)arg1 ;
@end

