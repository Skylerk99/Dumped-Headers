/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface GAXSpringboardClientStatus : NSObject {

	NSString* _sessionApplicationName;
	NSData* _archivedSessionApplicationIcon;

}

@property (nonatomic,retain) NSString * sessionApplicationName;                    //@synthesize sessionApplicationName=_sessionApplicationName - In the implementation block
@property (nonatomic,retain) NSData * archivedSessionApplicationIcon;              //@synthesize archivedSessionApplicationIcon=_archivedSessionApplicationIcon - In the implementation block
-(void)setSessionApplicationName:(NSString *)arg1 ;
-(void)setArchivedSessionApplicationIcon:(NSData *)arg1 ;
-(NSString *)sessionApplicationName;
-(NSData *)archivedSessionApplicationIcon;
-(void)dealloc;
-(id)description;
@end

