/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPDataStorage.h>

@class NSString;

@interface TSPStreamDataStorage : NSObject <TSPDataStorage>

@property (nonatomic,readonly) BOOL isReadable; 
@property (nonatomic,readonly) unsigned long long encodedLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * documentResourceLocator; 
@property (nonatomic,readonly) NSString * packageLocator; 
@property (nonatomic,readonly) unsigned char packageIdentifier; 
@property (nonatomic,readonly) BOOL isMissingData; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) BOOL readOnly; 
@property (nonatomic,readonly) BOOL needsDownload; 
@property (assign,nonatomic) BOOL gilligan_isRemote; 
@property (nonatomic,readonly) id<TSPCryptoInfo> decryptionInfo; 
@property (nonatomic,readonly) unsigned CRC; 
-(NSString *)packageLocator;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(BOOL)isMissingData;
-(id)filenameForPreferredFilename:(id)arg1 ;
-(id)bookmarkDataWithOptions:(unsigned long long)arg1 ;
-(id)NSDataWithOptions:(unsigned long long)arg1 ;
-(CGDataProviderRef)newCGDataProvider;
-(CGImageSourceRef)newCGImageSource;
-(id)AVAssetWithOptions:(id)arg1 forData:(id)arg2 ;
-(NSString *)documentResourceLocator;
-(BOOL)isInPackage:(id)arg1 ;
-(void)archiveInfoMessage:(DataInfo*)arg1 archiver:(id)arg2 ;
-(id)AVAssetWithOptions:(id)arg1 usingResourceLoaderForData:(id)arg2 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 ;
-(unsigned long long)length;
-(BOOL)readOnly;
-(unsigned char)packageIdentifier;
-(unsigned long long)encodedLength;
-(BOOL)isReadable;
@end

