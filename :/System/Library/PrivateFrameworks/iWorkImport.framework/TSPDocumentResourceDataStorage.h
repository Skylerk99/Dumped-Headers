/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPFileDataStorage.h>

@class TSPDocumentResourceManager, TSPDocumentResourceInfo;

@interface TSPDocumentResourceDataStorage : TSPFileDataStorage {

	TSPDocumentResourceManager* _manager;
	TSPDocumentResourceInfo* _documentResourceInfo;

}

@property (nonatomic,readonly) TSPDocumentResourceManager * manager;                      //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) TSPDocumentResourceInfo * documentResourceInfo;              //@synthesize documentResourceInfo=_documentResourceInfo - In the implementation block
-(id)storageForDataCopyFromOtherContext;
-(BOOL)isMissingData;
-(id)filenameForPreferredFilename:(id)arg1 ;
-(id)documentResourceLocator;
-(void)archiveInfoMessage:(DataInfo*)arg1 archiver:(id)arg2 ;
-(id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2 ;
-(TSPDocumentResourceInfo *)documentResourceInfo;
-(void)setDocumentResourceInfo:(TSPDocumentResourceInfo *)arg1 ;
-(TSPDocumentResourceManager *)manager;
-(BOOL)isReadable;
@end

