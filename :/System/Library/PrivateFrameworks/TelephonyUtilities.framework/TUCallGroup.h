/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TUCallGroup : NSObject {

	NSArray* _calls;

}

@property (retain) NSArray * calls;              //@synthesize calls=_calls - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)displayName;
-(int)status;
-(NSArray *)calls;
-(void)setCalls:(NSArray *)arg1 ;
@end

