#import "HUBJSONCompatibleBuilder.h"

@protocol HUBViewModelBuilder;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Protocol defining the public API for a builder that builds component target objects
 *
 *  This builder acts like a mutable model counterpart for `HUBComponentTarget`, with the
 *  key difference that they are not related by inheritance.
 *
 *  All properties are briefly documented as part of this protocol, but for more extensive
 *  documentation and use case examples, see the full documentation in the `HUBComponentTarget`
 *  protocol definition.
 */
@protocol HUBComponentTargetBuilder <HUBJSONCompatibleBuilder>

/// Any URI that should be opened when the user interacts with the target's component
@property (nonatomic, copy, nullable) NSURL *URI;

/// Any initial view model tha should be used for any Hub Framework-powered target view
@property (nonatomic, strong, readonly) id<HUBViewModelBuilder> initialViewModelBuilder;

/// Any custom data to associate with the target
@property (nonatomic, copy, nullable) NSDictionary<NSString *, NSObject *> *customData;

@end

NS_ASSUME_NONNULL_END
