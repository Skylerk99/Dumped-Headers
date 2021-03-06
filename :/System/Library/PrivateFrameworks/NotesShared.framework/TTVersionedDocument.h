/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@interface TTVersionedDocument : NSObject {

	Document* _documentArchive;

}

@property (nonatomic,readonly) unsigned long long futureVersionCount; 
@property (assign,nonatomic) Document* documentArchive;                            //@synthesize documentArchive=_documentArchive - In the implementation block
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
+(unsigned)versionedDocumentSerializationVersion;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)serialize;
-(void)saveToArchive:(Document*)arg1 ;
-(void)loadData:(id)arg1 ;
-(unsigned long long)mergeWithVersionedDocument:(id)arg1 ;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(void)loadDocumentArchive:(Document*)arg1 ;
-(Document*)documentArchive;
-(void)saveCurrentVersion:(Version*)arg1 ;
-(unsigned long long)futureVersionCount;
-(unsigned)maxDocumentVersion;
-(void)setDocumentArchive:(Document*)arg1 ;
-(id)initWithArchive:(const Document*)arg1 ;
-(void)loadArchive:(const Document*)arg1 ;
@end

