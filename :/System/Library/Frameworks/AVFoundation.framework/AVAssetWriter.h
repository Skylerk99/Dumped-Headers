/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVWeakObservable.h>
#import <AVFoundation/AVKeyPathDependencyHost.h>

@class AVAssetWriterInternal, NSURL, NSString, NSArray, NSError, AVAssetWriterHelper;

@interface AVAssetWriter : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {

	AVAssetWriterInternal* _internal;

}

@property (nonatomic,copy,readonly) NSURL * outputURL; 
@property (nonatomic,copy,readonly) NSString * outputFileType; 
@property (nonatomic,readonly) NSArray * availableMediaTypes; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse; 
@property (nonatomic,copy) NSURL * directoryForTemporaryFiles; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (getter=_helper,retain,readonly) AVAssetWriterHelper * helper; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_errorForOSStatus:(int)arg1 ;
+(id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3 ;
+(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(float)preferredRate;
-(float)preferredVolume;
-(void)setMovieFragmentInterval:(SCD_Struct_CM5)arg1 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(SCD_Struct_CM5)movieFragmentInterval;
-(SCD_Struct_CM5)overallDurationHint;
-(void)setOverallDurationHint:(SCD_Struct_CM5)arg1 ;
-(BOOL)shouldOptimizeForNetworkUse;
-(NSURL *)directoryForTemporaryFiles;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(int)movieTimeScale;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(id)inputGroups;
-(NSString *)outputFileType;
-(BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_helper;
-(NSArray *)availableMediaTypes;
-(BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 ;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_CM5)arg1 ;
-(BOOL)finishWriting;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 ;
-(BOOL)_supportsSampleReferencesReturningError:(id*)arg1 ;
-(void)_transitionToFailedStatusWithError:(id)arg1 ;
-(NSError *)error;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(long long)status;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3 ;
-(void)startSessionAtSourceTime:(SCD_Struct_CM5)arg1 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)outputURL;
-(void)cancelWriting;
-(NSArray *)inputs;
-(BOOL)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)finalize;
-(BOOL)startWriting;
-(NSArray *)metadata;
-(CGAffineTransform)preferredTransform;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
@end

