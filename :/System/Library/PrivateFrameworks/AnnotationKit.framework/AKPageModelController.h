/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSMutableSet, AKCropAnnotation, NSArray, NSSet;

@interface AKPageModelController : NSObject {

	NSMutableOrderedSet* _mutableAnnotations;
	NSMutableSet* _mutableSelectedAnnotations;
	id _representedObject;
	AKCropAnnotation* _cropAnnotation;

}

@property (__weak) id representedObject;                           //@synthesize representedObject=_representedObject - In the implementation block
@property (readonly) NSArray * annotations; 
@property (readonly) NSSet * selectedAnnotations; 
@property (retain) AKCropAnnotation * cropAnnotation;              //@synthesize cropAnnotation=_cropAnnotation - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)containsAnnotation:(id)arg1 ;
-(NSArray *)annotations;
-(NSSet *)selectedAnnotations;
-(void)setSelectedAnnotations:(NSSet *)arg1 ;
-(id)init;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(id)selectionStateForUndo;
-(void)restoreSelectionStateForUndo:(id)arg1 ;
-(BOOL)hasMaskBorderAnnotation;
-(void)selectAllAnnotations;
-(AKCropAnnotation *)cropAnnotation;
-(id)archivableRepresentation;
-(id)initWithArchivableRepresentation:(id)arg1 ;
-(void)selectAnnotation:(id)arg1 byExtendingSelection:(BOOL)arg2 ;
-(void)insertObject:(id)arg1 inAnnotationsAtIndex:(unsigned long long)arg2 ;
-(void)removeSelectedAnnotationsObject:(id)arg1 ;
-(void)removeSelectedAnnotations:(id)arg1 ;
-(void)replaceObjectInAnnotationsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)addSelectedAnnotationsObject:(id)arg1 ;
-(void)addSelectedAnnotations:(id)arg1 ;
-(void)removeAnnotationsAtIndexes:(id)arg1 ;
-(void)insertAnnotations:(id)arg1 atIndexes:(id)arg2 ;
-(void)selectAnnotationsAtIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2 ;
-(void)setCropAnnotation:(AKCropAnnotation *)arg1 ;
-(void)removeObjectFromAnnotationsAtIndex:(unsigned long long)arg1 ;
-(void)replaceAnnotationsAtIndexes:(id)arg1 withAnnotations:(id)arg2 ;
-(void)intersectSelectedAnnotations:(id)arg1 ;
-(void)bringSelectedAnnotationsForward;
-(void)bringSelectedAnnotationsToFront;
-(void)sendSelectedAnnotationsBackward;
-(void)sendSelectedAnnotationsToBack;
-(void)addCropToolAnnotation;
-(void)removeCropToolAnnotation;
@end

