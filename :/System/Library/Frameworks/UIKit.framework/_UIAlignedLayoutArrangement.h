/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UILayoutArrangement.h>
#import <UIKit/_UIALAPropertySource.h>

@class NSMutableDictionary, NSString, NSSet;

@interface _UIAlignedLayoutArrangement : _UILayoutArrangement <_UIALAPropertySource> {

	NSMutableDictionary* _alignmentConstraints;
	unsigned long long _alignment;

}

@property (assign,nonatomic) unsigned long long alignment;                         //@synthesize alignment=_alignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
+(Class)_configurationHistoryClass;
-(void)setAlignment:(unsigned long long)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(unsigned long long)alignment;
-(unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1 ;
-(id)_alignmentPropertySource;
-(BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)arg1 ;
-(BOOL)_spanningGuideConstraintsNeedUpdate;
-(id)_alignmentConfigurationHistory;
-(BOOL)_canvasConnectionConstraintsNeedUpdatePass;
-(void)_trackChangesWithValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_hasStaleConfiguration;
-(void)_updateConfigurationHistory;
-(BOOL)_wantsConstraintsUsingAttributesForAxis:(long long)arg1 ;
-(BOOL)_wantsAmbiguitySuppressionConstraints;
-(long long)_attributeForConstraintGroupName:(id)arg1 ;
-(void)_setUpConstraintForItem:(id)arg1 referenceItem:(id)arg2 attribute:(long long)arg3 inConstraintsTable:(id)arg4 ;
-(BOOL)_wantsConstraintsForAttribute:(long long)arg1 ;
-(void)_updateArrangementConstraints;
-(void)_removeConstraintGroupsAsNecessary;
-(void)_removeIndividualConstraintsAsNecessary;
-(void)_addIndividualConstraintsIfPossible;
-(void)_addConstraintGroupsAsNecessary;
-(void)_clearAllConstraintsArrays;
-(id)_identifierForSpanningLayoutGuide;
-(long long)_axisForSpanningLayoutGuide;
-(long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1 ;
-(BOOL)_usesCenteringConnectionConstraint;
@end

