/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISDialog;

@interface DevicePasscodePromptOperation : ISOperation {

	ISDialog* _dialog;
	/*^block*/id _tokenBlock;

}

@property (copy) id tokenBlock; 
-(void)setTokenBlock:(id)arg1 ;
-(id)tokenBlock;
-(void)dealloc;
-(void)run;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(long long)_keyboardType;
@end

