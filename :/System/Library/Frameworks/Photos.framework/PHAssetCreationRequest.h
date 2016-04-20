/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHAssetChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>

@class NSMutableArray, PHAssetResourceBag, PHAssetCreationPhotoStreamPublishingRequest, NSString, NSManagedObjectID;

@interface PHAssetCreationRequest : PHAssetChangeRequest <PHInsertChangeRequest> {

	NSMutableArray* _assetResources;
	PHAssetResourceBag* _assetResourceBag;
	PHAssetCreationPhotoStreamPublishingRequest* __photoStreamPublishingRequest;

}

@property (setter=_setPhotoStreamPublishingRequest:,nonatomic,retain) PHAssetCreationPhotoStreamPublishingRequest * _photoStreamPublishingRequest;              //@synthesize _photoStreamPublishingRequest=__photoStreamPublishingRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isEntitled,nonatomic,readonly) BOOL entitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) int clientProcessID; 
@property (getter=isNew,readonly) BOOL new; 
+(id)_creationRequestForAssetUsingUUID:(id)arg1 ;
+(id)creationRequestForAssetFromImageData:(id)arg1 usingUUID:(id)arg2 ;
+(id)creationRequestForAssetFromImageData:(id)arg1 ;
+(id)creationRequestForAssetFromImage:(id)arg1 ;
+(id)creationRequestForAssetFromVideoAtFileURL:(id)arg1 ;
+(BOOL)supportsAssetResourceTypes:(id)arg1 ;
+(BOOL)_createAssetFromImageData:(id)arg1 imageType:(id)arg2 uuid:(id)arg3 error:(id*)arg4 ;
+(id)creationRequestForAssetFromVideoComplementBundle:(id)arg1 ;
+(id)creationRequestForAsset;
+(id)creationRequestForAssetFromImageAtFileURL:(id)arg1 ;
-(id)initWithHelper:(id)arg1 ;
-(BOOL)isNew;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)initWithXPCDict:(id)arg1 entitled:(BOOL)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initForNewObject;
-(BOOL)canGenerateUUIDLocally;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(id)initForNewObjectWithUUID:(id)arg1 ;
-(void)_addResourceWithType:(long long)arg1 data:(id)arg2 orFileURL:(id)arg3 options:(id)arg4 ;
-(id)_secureMove:(BOOL)arg1 fileAtURL:(id)arg2 toURL:(id)arg3 error:(id*)arg4 ;
-(id)_secureMove:(BOOL)arg1 assetResource:(id)arg2 error:(id*)arg3 ;
-(id)_managedAssetFromData:(id)arg1 photoLibrary:(id)arg2 getImageSource:(CGImageSource*)arg3 imageData:(id*)arg4 ;
-(void)_setPhotoStreamPublishingRequest:(id)arg1 ;
-(BOOL)_createAssetAsPhotoIris:(id)arg1 fromValidatedResources:(id)arg2 error:(id*)arg3 ;
-(BOOL)_createAssetAsAdjusted:(id)arg1 fromValidatedResources:(id)arg2 error:(id*)arg3 ;
-(long long)_mediaTypeForCreatedAsset;
-(BOOL)_createAssetFromValidatedResources:(id)arg1 uuid:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(PHAssetCreationPhotoStreamPublishingRequest *)_photoStreamPublishingRequest;
-(void)addResourceWithType:(long long)arg1 data:(id)arg2 options:(id)arg3 ;
-(void)addResourceWithType:(long long)arg1 fileURL:(id)arg2 options:(id)arg3 ;
-(id)placeholderForCreatedAsset;
@end

