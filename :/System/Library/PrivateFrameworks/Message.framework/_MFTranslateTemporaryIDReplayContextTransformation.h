/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFOfflineCacheReplayContextTransformation.h>

@class NSString;

@interface _MFTranslateTemporaryIDReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation> {

	NSString* _temporaryID;
	NSString* _translatedID;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)applyToReplayContext:(id)arg1 ;
-(id)initWithTemporaryID:(id)arg1 translatedID:(id)arg2 ;
@end

