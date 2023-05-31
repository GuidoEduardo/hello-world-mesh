#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SquareMesh.generated.h"

class UProceduralMeshComponent;

UCLASS()
class HELLOWORLD_API ASquareMesh : public AActor
{
	GENERATED_BODY()
	
public:	
	ASquareMesh();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true))
		TArray<FVector> Vertices;
	
	UPROPERTY(EditAnywhere)
		TArray<int> Triangles;

	UPROPERTY(EditAnywhere)
		TArray<FVector2D> Uv0;

	UPROPERTY(EditAnywhere)
		UMaterialInterface* Material;	

public:	
	virtual void Tick(float DeltaTime) override;

private:
	UProceduralMeshComponent* ProceduralMesh;

};
