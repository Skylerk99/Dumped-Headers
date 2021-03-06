/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSResponse.h>

@class NSDictionary;

@interface ICAddToLibraryResponse : HSResponse {

	BOOL _updateRequired;
	NSDictionary* _addedItems;

}

@property (nonatomic,retain) NSDictionary * addedItems;              //@synthesize addedItems=_addedItems - In the implementation block
@property (assign,nonatomic) BOOL updateRequired;                    //@synthesize updateRequired=_updateRequired - In the implementation block
-(BOOL)updateRequired;
-(void)setUpdateRequired:(BOOL)arg1 ;
-(NSDictionary *)addedItems;
-(void)setAddedItems:(NSDictionary *)arg1 ;
@end

