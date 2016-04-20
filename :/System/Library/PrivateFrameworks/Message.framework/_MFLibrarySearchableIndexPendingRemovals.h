/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface _MFLibrarySearchableIndexPendingRemovals : NSObject {

	NSMutableDictionary* _reasonsByIdentifier;

}

@property (readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * identifiers; 
@property (nonatomic,readonly) NSArray * purgedIdentifiers; 
@property (nonatomic,readonly) NSArray * deletedIdentifiers; 
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(NSArray *)identifiers;
-(NSArray *)purgedIdentifiers;
-(NSArray *)deletedIdentifiers;
-(void)removeIdentifier:(id)arg1 ;
-(void)addIdentifiers:(id)arg1 withReasons:(id)arg2 ;
-(void)removeAllIdentifiers;
-(void)getPurgingReasons:(id*)arg1 excluding:(id*)arg2 ;
-(id)_identifiersPassingReasonsTest:(/*^block*/id)arg1 ;
@end

