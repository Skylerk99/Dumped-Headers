/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPFileDataStorage.h>

@protocol TSPCryptoInfo;
@class NSURL;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {

	NSURL* _URL;
	id<TSPCryptoInfo> _decryptionInfo;
	BOOL _isMissingData;
	BOOL _gilligan_isRemote;
	BOOL _isMissingOriginalData;

}

@property (assign,nonatomic) BOOL isMissingOriginalData;              //@synthesize isMissingOriginalData=_isMissingOriginalData - In the implementation block
@property (assign,nonatomic) BOOL isMissingData;                      //@synthesize isMissingData=_isMissingData - In the implementation block
-(id)initWithURL:(id)arg1 decryptionInfo:(id)arg2 ;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(id)decryptionInfo;
-(BOOL)isMissingData;
-(BOOL)gilligan_isRemote;
-(void)setGilligan_isRemote:(BOOL)arg1 ;
-(void)setIsMissingOriginalData:(BOOL)arg1 ;
-(void)setIsMissingData:(BOOL)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 ;
-(BOOL)isMissingOriginalData;
-(void)dealloc;
-(unsigned long long)length;
@end

