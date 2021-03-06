#ifndef __UIBase_h__
#define __UIBase_h__


class UIBase {
public:
	//初期化
	virtual void Init();
	//更新
	virtual void Update();
	//描画
	virtual void Draw();
	//解放
	virtual void Release();

	void LoadText(LPDIRECT3DTEXTURE9 *lpTex, const char fname[], int W, int H, D3DCOLOR Color);
private:

protected:
	LPD3DXSPRITE lpSprite;
	D3DXMATRIX mSprite;
	RECT rc;
};

#endif