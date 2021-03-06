/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPFileCoordinatorDelegate.h>

@class NSURL, TSPPackage, TSPDocumentProperties, NSString;

@interface TSPPackageDataReader : NSObject <TSPFileCoordinatorDelegate> {

	NSURL* _URL;
	TSPPackage* _package;

}

@property (nonatomic,readonly) long long packageType; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) TSPDocumentProperties * documentProperties; 
@property (nonatomic,readonly) BOOL isPasswordProtected; 
@property (nonatomic,readonly) NSString * passwordHint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)passwordHint;
-(long long)packageType;
-(BOOL)checkPassword:(id)arg1 ;
-(void)performReadUsingAccessor:(/*^block*/id)arg1 ;
-(BOOL)hasDataAtRelativePath:(id)arg1 ;
-(CGImageSourceRef)newCGImageSourceAtRelativePath:(id)arg1 ;
-(id)initWithURL:(id)arg1 decryptionKey:(id)arg2 ;
-(CGDataProviderRef)newCGDataProviderAtRelativePath:(id)arg1 ;
-(CGImageRef)newCGImageAtRelativePath:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(TSPDocumentProperties *)documentProperties;
-(BOOL)isPasswordProtected;
@end

