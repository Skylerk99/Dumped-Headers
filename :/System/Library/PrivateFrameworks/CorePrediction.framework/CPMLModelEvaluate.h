/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPMLAlgorithmProtocol;
#import <CorePrediction/CorePrediction-Structs.h>
@class NSMutableArray, NSNumber, NSString, CPMLSchema, CPMLStorageManager;

@interface CPMLModelEvaluate : NSObject {

	BOOL enableCacheString;
	BOOL keepInMemory;
	BOOL shouldFail;
	sqlite3Ref db;
	int countRows;
	NSMutableArray* modelSchema;
	NSMutableArray* vectorPositions;
	NSNumber* maxRemoveTrainingRow;
	NSString* serializeFunction;
	NSString* machineLearningAlgo;
	CPMLAlgorithm* cpMLAlgo;
	CPMLSerialization* trainerCPDeSerializer;
	CPMLRemapper* cpRemapper;
	CPMLSchema* cpmlSchema;
	CPMLStatistics* trainerCPStatistics;
	CPMLDelegate* _cpmlDelegate;
	CPMLTunableData* cpTuneableData;
	int mapFunction;
	vector<int, std::__1::allocator<int> >* boundedRemappedValues;
	CPMLDelegateEngine* _delegateEngine;
	CPMLStorageManager* _storageManager;
	id<CPMLAlgorithmProtocol> _delegateAlgorithm;

}
-(void)dealloc;
-(id)initWithModel:(id)arg1 withPropertyList:(id)arg2 ;
-(id)fileProtectionClassRequest:(id)arg1 ;
-(void*)getModelData;
-(id)evalString:(id)arg1 ;
-(id)evalNSObjectV:(id)arg1 ;
-(id)evalArray:(id)arg1 ;
-(id)evalDict:(id)arg1 ;
-(void)boundResult:(id)arg1 ;
-(BOOL)updateModel:(id)arg1 ;
-(void)setCPMLAlgorithm:(id)arg1 ;
-(void)setCPMLAlgorithmEngine:(id)arg1 ;
-(void)buildEvaluateMachineLearningAlgorithm;
-(void)doRemapToFeatureVector:(CPMLFeatureVector*)arg1 withPositionID:(unsigned long long)arg2 withMaxCol:(unsigned long long)arg3 withValue:(id)arg4 ;
-(id)doEvaluate:(CPMLFeatureVector*)arg1 withBoundedList:(vector<int, std::__1::allocator<int> >*)arg2 ;
-(int)getAttributeType:(id)arg1 ;
-(void)constructVector:(CPMLFeatureVector*)arg1 withColumnPosition:(unsigned long long)arg2 maxColNumber:(unsigned long long)arg3 withValue:(id)arg4 ;
-(id)evalCTypesV:(char*)arg1 ;
@end

