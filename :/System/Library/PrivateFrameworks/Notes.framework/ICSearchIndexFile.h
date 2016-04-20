/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ICSearchIndexFile
@property (nonatomic,copy,readonly) NSString * name; 
@required
-(NSString *)name;
-(void)close;
-(void)removeDocumentsForIdentifiers:(id)arg1;
-(BOOL)opened;
-(BOOL)createWithURL:(id)arg1;
-(BOOL)openWithURL:(id)arg1 transactionId:(id*)arg2;
-(void)addDocumentWithIdentifier:(id)arg1 content:(id)arg2 transactionId:(id*)arg3;

@end

