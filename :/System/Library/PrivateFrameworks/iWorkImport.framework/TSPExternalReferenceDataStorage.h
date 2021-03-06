/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPFileDataStorage.h>

@class NSURL, NSData, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {

	NSURL* _URL;
	NSData* _bookmarkData;
	TSPObjectContext* _context;

}
-(id)storageForDataCopyFromOtherContext;
-(id)initWithBookmarkData:(id)arg1 context:(id)arg2 ;
-(void)archiveInfoMessage:(DataInfo*)arg1 archiver:(id)arg2 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)bookmarkDataForArchiver:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isReadable;
@end

