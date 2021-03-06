/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BulletinBoardSection, BBDataProviderConnection, NSObject, NSMutableDictionary, NSLock;

@interface BulletinBoard : NSObject {

	BulletinBoardSection* _appStoreSection;
	BBDataProviderConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _sectionsByIdentifier;
	NSLock* _sectionsLock;

}

@property (readonly) BulletinBoardSection * appStoreSection; 
+(id)bulletinBoard;
-(BulletinBoardSection *)appStoreSection;
-(void)dealloc;
-(id)init;
-(id)sectionWithIdentifier:(id)arg1 ;
@end

