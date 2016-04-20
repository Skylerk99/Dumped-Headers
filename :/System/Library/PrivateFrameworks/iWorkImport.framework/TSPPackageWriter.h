/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPPackageDataWriter.h>

@protocol TSPComponentWriteChannel, OS_dispatch_queue;
@class TSPPackage, NSObject, NSError, NSURL, SFUCryptoKey, TSUZipFileWriter, NSProgress, NSString;

@interface TSPPackageWriter : NSObject <TSPPackageDataWriter> {

	TSPPackage* _originalDocumentPackage;
	TSPPackage* _originalSupportPackage;
	id<TSPComponentWriteChannel> _componentWriteChannel;
	NSObject*<OS_dispatch_queue> _errorQueue;
	NSError* _error;
	TSPPackage* _writtenPackage;
	BOOL _isOpened;
	NSURL* _URL;
	NSURL* _documentTargetURL;
	NSURL* _relativeURLForExternalData;
	long long _updateType;
	SFUCryptoKey* _encryptionKey;
	TSUZipFileWriter* _zipArchiveWriter;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSURL * URL;                                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSURL * documentTargetURL;                        //@synthesize documentTargetURL=_documentTargetURL - In the implementation block
@property (nonatomic,readonly) NSURL * relativeURLForExternalData;               //@synthesize relativeURLForExternalData=_relativeURLForExternalData - In the implementation block
@property (nonatomic,readonly) long long updateType;                             //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) SFUCryptoKey * encryptionKey;                     //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,readonly) TSUZipFileWriter * zipArchiveWriter;              //@synthesize zipArchiveWriter=_zipArchiveWriter - In the implementation block
@property (nonatomic,readonly) TSPPackage * originalPackage; 
@property (nonatomic,readonly) NSProgress * progress;                            //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newPackageWriterWithPackageType:(long long)arg1 URL:(id)arg2 documentTargetURL:(id)arg3 relativeURLForExternalData:(id)arg4 packageIdentifier:(unsigned char)arg5 documentProperties:(id)arg6 fileFormatVersion:(unsigned long long)arg7 updateType:(long long)arg8 encryptionKey:(id)arg9 originalDocumentPackage:(id)arg10 originalSuppportPackage:(id)arg11 fileCoordinatorDelegate:(id)arg12 progress:(id)arg13 error:(id*)arg14 ;
-(SFUCryptoKey *)encryptionKey;
-(void)closeWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)relativeURLForExternalData;
-(BOOL)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(BOOL)arg3 error:(id*)arg4 ;
-(id)writtenPackageWithURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 fileFormatVersion:(unsigned long long)arg6 updateType:(long long)arg7 encryptionKey:(id)arg8 originalDocumentPackage:(id)arg9 originalSuppportPackage:(id)arg10 fileCoordinatorDelegate:(id)arg11 progress:(id)arg12 error:(id*)arg13 ;
-(unsigned long long)encodedLengthForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 packageURL:(id)arg3 ;
-(id)newRawComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(BOOL)arg2 ;
-(id)filenameForData:(id)arg1 preferredFilename:(id)arg2 ;
-(CGDataConsumerRef)newCGDataConsumerAtRelativePath:(id)arg1 ;
-(id)linkOrCopyData:(id)arg1 fromURL:(id)arg2 decryptionInfo:(id)arg3 preferredFilename:(id)arg4 error:(id*)arg5 ;
-(id)newPackageWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 ;
-(id)newRawDataWriteChannelForRelativePath:(id)arg1 originalSize:(unsigned long long)arg2 originalCRC:(unsigned)arg3 ;
-(TSUZipFileWriter *)zipArchiveWriter;
-(NSURL *)documentTargetURL;
-(id)newComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(BOOL)arg2 ;
-(TSPPackage *)originalPackage;
-(void)copyComponent:(id)arg1 locator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)addData:(id)arg1 infoMessage:(DataInfo*)arg2 saveOperationState:(id)arg3 ;
-(void)closeCurrentChannel;
-(id)copyData:(id)arg1 withReadChannel:(id)arg2 decryptionInfo:(id)arg3 size:(unsigned long long)arg4 preferredFilename:(id)arg5 error:(id*)arg6 ;
-(void)dealloc;
-(id)init;
-(NSURL *)URL;
-(NSProgress *)progress;
-(BOOL)closeAndReturnError:(id*)arg1 ;
-(void)setError:(id)arg1 ;
-(long long)updateType;
@end

