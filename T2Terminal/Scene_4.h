#pragma once
/*
* @author: Sanket Deshmukh.
* @mailto: 1sanketdeshmukh@gmail.com
* please dont remove @author or modify it.
* any changes or bug fixes are done please annotate the locations where bug fixed.
*/

#ifndef _SCENE_4_H_
#define _SCENE_4_H_

#include "CreditScene.h"

#include "IScene.h"
namespace Scene_4
{
	class Scene_4 : public virtual T2Terminal::IScene
	{
	public:
		Scene_4();
		~Scene_4();

	private:
		Sanket::CreditScene *_CreditScene;

	public:

		// Inherited from IScene

		virtual BOOL SceneHandler(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam) override;

		virtual void Initialize() override;

		virtual void Update() override;

		virtual void ReSize(int width, int height, struct ResizeAttributes attributes) override;

		virtual void Render(HDC hdc, struct Attributes attributes) override;

		virtual void SceneTransition() override;

		virtual void UnInitialize() override;

	};
}

#endif // !_SCENE_4_H_
