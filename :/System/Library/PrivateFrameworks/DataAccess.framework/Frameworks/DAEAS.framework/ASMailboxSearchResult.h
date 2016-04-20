/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASEmailItem.h>

@class NSMutableArray, NSArray;

@interface ASMailboxSearchResult : ASEmailItem {

	NSMutableArray* _mClasses;
	NSMutableArray* _mCollectionIDs;

}

@property (nonatomic,readonly) NSArray * classes; 
@property (nonatomic,readonly) NSArray * collectionIDs; 
@property (nonatomic,retain) NSMutableArray * mClasses;                    //@synthesize mClasses=_mClasses - In the implementation block
@property (nonatomic,retain) NSMutableArray * mCollectionIDs;              //@synthesize mCollectionIDs=_mCollectionIDs - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)addClass:(id)arg1 ;
-(id)init;
-(id)description;
-(NSArray *)classes;
-(void)addCollectionID:(id)arg1 ;
-(NSMutableArray *)mClasses;
-(NSMutableArray *)mCollectionIDs;
-(void)setMClasses:(NSMutableArray *)arg1 ;
-(void)setMCollectionIDs:(NSMutableArray *)arg1 ;
-(BOOL)_isSearchResult;
-(NSArray *)collectionIDs;
@end

