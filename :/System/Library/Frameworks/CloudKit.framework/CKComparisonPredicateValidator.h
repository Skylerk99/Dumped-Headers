/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;
@interface CKComparisonPredicateValidator : CKPredicateValidatorInstance {

	id<CKObjectValidating> _modifierValidator;
	id<CKObjectValidating> _leftExpressionValidator;
	id<CKObjectValidating> _operatorValidator;
	id<CKObjectValidating> _optionsValidator;
	id<CKObjectValidating> _rightExpressionValidator;

}

@property (nonatomic,retain) id<CKObjectValidating> modifierValidator;                     //@synthesize modifierValidator=_modifierValidator - In the implementation block
@property (nonatomic,retain) id<CKObjectValidating> leftExpressionValidator;               //@synthesize leftExpressionValidator=_leftExpressionValidator - In the implementation block
@property (nonatomic,retain) id<CKObjectValidating> operatorValidator;                     //@synthesize operatorValidator=_operatorValidator - In the implementation block
@property (nonatomic,retain) id<CKObjectValidating> optionsValidator;                      //@synthesize optionsValidator=_optionsValidator - In the implementation block
@property (nonatomic,retain) id<CKObjectValidating> rightExpressionValidator;              //@synthesize rightExpressionValidator=_rightExpressionValidator - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(void)setModifierValidator:(id<CKObjectValidating>)arg1 ;
-(void)setLeftExpressionValidator:(id<CKObjectValidating>)arg1 ;
-(void)setOperatorValidator:(id<CKObjectValidating>)arg1 ;
-(void)setOptionsValidator:(id<CKObjectValidating>)arg1 ;
-(void)setRightExpressionValidator:(id<CKObjectValidating>)arg1 ;
-(id<CKObjectValidating>)modifierValidator;
-(id<CKObjectValidating>)leftExpressionValidator;
-(id<CKObjectValidating>)operatorValidator;
-(id<CKObjectValidating>)optionsValidator;
-(id<CKObjectValidating>)rightExpressionValidator;
-(id)CKPropertiesDescription;
@end

