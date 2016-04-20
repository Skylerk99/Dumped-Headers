/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber;

@interface KeybagSyncOperation : ISOperation {

	NSNumber* _accountIdentifier;

}
-(id)initWithKeybagSyncRequest:(id)arg1 ;
-(id)_newBodyDataWithBodyPlist:(id)arg1 error:(id*)arg2 ;
-(id)_newRequestPropertiesWithBodyData:(id)arg1 ;
-(void)run;
@end

