/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSString, SUConcernItem;

@interface SUPostConcernOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSString* _commentText;
	SUConcernItem* _concern;
	unsigned long long _itemIdentifier;

}

@property (retain) NSString * commentText;                          //@synthesize commentText=_commentText - In the implementation block
@property (retain) SUConcernItem * concern;                         //@synthesize concern=_concern - In the implementation block
@property (assign) unsigned long long itemIdentifier;               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)commentText;
-(void)setCommentText:(NSString *)arg1 ;
-(void)dealloc;
-(void)run;
-(unsigned long long)itemIdentifier;
-(id)_httpBody;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)initWithConcern:(id)arg1 ;
-(void)setConcern:(SUConcernItem *)arg1 ;
-(SUConcernItem *)concern;
@end

