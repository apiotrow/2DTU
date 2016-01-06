#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.Dropdown
struct Dropdown_t7_70;
// UnityEngine.RectTransform
struct RectTransform_t6_62;
// UnityEngine.UI.Text
struct Text_t7_63;
// UnityEngine.UI.Image
struct Image_t7_64;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_t1_928;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t7_68;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t7_36;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t7_5;
// UnityEngine.GameObject
struct GameObject_t6_93;
// UnityEngine.Canvas
struct Canvas_t6_156;
// UnityEngine.UI.Dropdown/DropdownItem
struct DropdownItem_t7_62;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t7_66;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t1_929;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// UnityEngine.UI.Toggle
struct Toggle_t7_65;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Dropdown::.ctor()
extern "C" void Dropdown__ctor_m7_412 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Dropdown::get_template()
extern "C" RectTransform_t6_62 * Dropdown_get_template_m7_413 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_template(UnityEngine.RectTransform)
extern "C" void Dropdown_set_template_m7_414 (Dropdown_t7_70 * __this, RectTransform_t6_62 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.Dropdown::get_captionText()
extern "C" Text_t7_63 * Dropdown_get_captionText_m7_415 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_captionText(UnityEngine.UI.Text)
extern "C" void Dropdown_set_captionText_m7_416 (Dropdown_t7_70 * __this, Text_t7_63 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Dropdown::get_captionImage()
extern "C" Image_t7_64 * Dropdown_get_captionImage_m7_417 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_captionImage(UnityEngine.UI.Image)
extern "C" void Dropdown_set_captionImage_m7_418 (Dropdown_t7_70 * __this, Image_t7_64 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.Dropdown::get_itemText()
extern "C" Text_t7_63 * Dropdown_get_itemText_m7_419 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_itemText(UnityEngine.UI.Text)
extern "C" void Dropdown_set_itemText_m7_420 (Dropdown_t7_70 * __this, Text_t7_63 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Dropdown::get_itemImage()
extern "C" Image_t7_64 * Dropdown_get_itemImage_m7_421 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_itemImage(UnityEngine.UI.Image)
extern "C" void Dropdown_set_itemImage_m7_422 (Dropdown_t7_70 * __this, Image_t7_64 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
extern "C" List_1_t1_928 * Dropdown_get_options_m7_423 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_options(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>)
extern "C" void Dropdown_set_options_m7_424 (Dropdown_t7_70 * __this, List_1_t1_928 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
extern "C" DropdownEvent_t7_68 * Dropdown_get_onValueChanged_m7_425 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_onValueChanged(UnityEngine.UI.Dropdown/DropdownEvent)
extern "C" void Dropdown_set_onValueChanged_m7_426 (Dropdown_t7_70 * __this, DropdownEvent_t7_68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
extern "C" int32_t Dropdown_get_value_m7_427 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
extern "C" void Dropdown_set_value_m7_428 (Dropdown_t7_70 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Awake()
extern "C" void Dropdown_Awake_m7_429 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Refresh()
extern "C" void Dropdown_Refresh_m7_430 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::SetupTemplate()
extern "C" void Dropdown_SetupTemplate_m7_431 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Dropdown_OnPointerClick_m7_432 (Dropdown_t7_70 * __this, PointerEventData_t7_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Dropdown_OnSubmit_m7_433 (Dropdown_t7_70 * __this, BaseEventData_t7_5 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnCancel(UnityEngine.EventSystems.BaseEventData)
extern "C" void Dropdown_OnCancel_m7_434 (Dropdown_t7_70 * __this, BaseEventData_t7_5 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Show()
extern "C" void Dropdown_Show_m7_435 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.Dropdown::CreateBlocker(UnityEngine.Canvas)
extern "C" GameObject_t6_93 * Dropdown_CreateBlocker_m7_436 (Dropdown_t7_70 * __this, Canvas_t6_156 * ___rootCanvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyBlocker(UnityEngine.GameObject)
extern "C" void Dropdown_DestroyBlocker_m7_437 (Dropdown_t7_70 * __this, GameObject_t6_93 * ___blocker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.Dropdown::CreateDropdownList(UnityEngine.GameObject)
extern "C" GameObject_t6_93 * Dropdown_CreateDropdownList_m7_438 (Dropdown_t7_70 * __this, GameObject_t6_93 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyDropdownList(UnityEngine.GameObject)
extern "C" void Dropdown_DestroyDropdownList_m7_439 (Dropdown_t7_70 * __this, GameObject_t6_93 * ___dropdownList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownItem UnityEngine.UI.Dropdown::CreateItem(UnityEngine.UI.Dropdown/DropdownItem)
extern "C" DropdownItem_t7_62 * Dropdown_CreateItem_m7_440 (Dropdown_t7_70 * __this, DropdownItem_t7_62 * ___itemTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyItem(UnityEngine.UI.Dropdown/DropdownItem)
extern "C" void Dropdown_DestroyItem_m7_441 (Dropdown_t7_70 * __this, DropdownItem_t7_62 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownItem UnityEngine.UI.Dropdown::AddItem(UnityEngine.UI.Dropdown/OptionData,System.Boolean,UnityEngine.UI.Dropdown/DropdownItem,System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>)
extern "C" DropdownItem_t7_62 * Dropdown_AddItem_m7_442 (Dropdown_t7_70 * __this, OptionData_t7_66 * ___data, bool ___selected, DropdownItem_t7_62 * ___itemTemplate, List_1_t1_929 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::AlphaFadeList(System.Single,System.Single)
extern "C" void Dropdown_AlphaFadeList_m7_443 (Dropdown_t7_70 * __this, float ___duration, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::AlphaFadeList(System.Single,System.Single,System.Single)
extern "C" void Dropdown_AlphaFadeList_m7_444 (Dropdown_t7_70 * __this, float ___duration, float ___start, float ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::SetAlpha(System.Single)
extern "C" void Dropdown_SetAlpha_m7_445 (Dropdown_t7_70 * __this, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Hide()
extern "C" void Dropdown_Hide_m7_446 (Dropdown_t7_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Dropdown::DelayedDestroyDropdownList(System.Single)
extern "C" Object_t * Dropdown_DelayedDestroyDropdownList_m7_447 (Dropdown_t7_70 * __this, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnSelectItem(UnityEngine.UI.Toggle)
extern "C" void Dropdown_OnSelectItem_m7_448 (Dropdown_t7_70 * __this, Toggle_t7_65 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
