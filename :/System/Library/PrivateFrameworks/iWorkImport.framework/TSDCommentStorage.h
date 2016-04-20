/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSPCopying.h>

@class NSString, NSDate, TSKAnnotationAuthor;

@interface TSDCommentStorage : TSPObject <TSPCopying> {

	NSString* mText;
	NSDate* mCreationDate;
	TSKAnnotationAuthor* mAuthor;

}

@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) TSKAnnotationAuthor * author; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToArchive:(CommentStorageArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const CommentStorageArchive*)arg1 unarchiver:(id)arg2 ;
-(void)commentWillBeAddedToDocumentRoot;
-(id)initWithContext:(id)arg1 text:(id)arg2 creationDate:(id)arg3 author:(id)arg4 ;
-(id)copyWithText:(id)arg1 ;
-(id)initWithContext:(id)arg1 author:(id)arg2 ;
-(id)copyByAppendingText:(id)arg1 ;
-(id)copyWithAuthor:(id)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(id)creationDateString;
-(void)setAuthor:(TSKAnnotationAuthor *)arg1 ;
-(TSKAnnotationAuthor *)author;
@end

