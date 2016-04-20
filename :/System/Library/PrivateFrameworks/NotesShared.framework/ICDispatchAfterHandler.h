/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ICDispatchAfterHandler : NSObject {

	NSMutableDictionary* _identifierBlockMap;

}

@property (nonatomic,retain) NSMutableDictionary * identifierBlockMap;              //@synthesize identifierBlockMap=_identifierBlockMap - In the implementation block
+(id)appLifeCycleHandler;
-(id)init;
-(void)cancelBlocksWithStringIdentifier:(id)arg1 ;
-(void)dispatchAfter:(double)arg1 stringIdentifier:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)cancelAll;
-(void)setIdentifierBlockMap:(NSMutableDictionary *)arg1 ;
-(id)identifierForStringIdentifier:(id)arg1 ;
-(NSMutableDictionary *)identifierBlockMap;
@end

