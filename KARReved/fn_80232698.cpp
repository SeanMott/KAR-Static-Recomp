//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8023303C.hpp"
#include "fn_8023303C.hpp"
#include "fn_80232930.hpp"
#include "fn_80232930.hpp"
#include "fn_80232FD8.hpp"
#include "fn_80232A34.hpp"
#include "fn_80232F40.hpp"
#include "fn_802332A8.hpp"
#include "fn_802328A4.hpp"
#include "fn_802328A4.hpp"
#include "fn_802328A8.hpp"
#include "fn_802328A8.hpp"
#include "fn_802328CC.hpp"
#include "fn_802328CC.hpp"
#include "fn_80232FA0.hpp"
#include "fn_80233164.hpp"
#include "fn_802330C4.hpp"



void fn_80232698(PPC::Runtime::GCContext* context)
{
/*80232698 0022F498*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8023269C 0022F49C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802326A0 0022F4A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802326A4 0022F4A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802326A8 0022F4A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802326AC 0022F4AC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802326B0 0022F4B0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802326B4 0022F4B4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1NULL4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802326B8 0022F4B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802326BC 0022F4BC*/ PPC::Runtime::ASM::bne(.L_802326C8);
/*802326C0 0022F4C0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802326C4 0022F4C4*/ PPC::Runtime::ASM::b(.L_80232888);
RUNTIME_PPC_JUMP_LABEL(.L_802326C8, 0x802326C8) //this is a jump label
/*802326C8 0022F4C8*/ PPC::Runtime::ASM::li(context->r3, 0x12);
/*802326CC 0022F4CC*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*802326D0 0022F4D0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802326D4 0022F4D4*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*802326D8 0022F4D8*/ PPC::Runtime::ASM::lis(context->r4, fn_8023303C @ Get_MemoryOffset_HighBit);
/*802326DC 0022F4DC*/ PPC::Runtime::ASM::li(context->r5, 0x7);
/*802326E0 0022F4E0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8023303C @ Get_MemoryOffset_LowBit);
/*802326E4 0022F4E4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802326E8 0022F4E8*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*802326EC 0022F4EC*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*802326F0 0022F4F0*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D770 @ Get_MemoryOffset_HighBit);
/*802326F4 0022F4F4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055D770 @ Get_MemoryOffset_LowBit);
/*802326F8 0022F4F8*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*802326FC 0022F4FC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80232700 0022F500*/ PPC::Runtime::ASM::lis(context->r4, fn_80232930 @ Get_MemoryOffset_HighBit);
/*80232704 0022F504*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_80232930 @ Get_MemoryOffset_LowBit);
/*80232708 0022F508*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8023270C 0022F50C*/ PPC::Runtime::ASM::li(context->r4, 0x12);
/*80232710 0022F510*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*80232714 0022F514*/ PPC::Runtime::ASM::bl(fn_GObj_AddUserData);
/*80232718 0022F518*/ PPC::Runtime::ASM::bl(fn_80232FD8);
/*8023271C 0022F51C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80232720 0022F520*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80232724 0022F524*/ PPC::Runtime::ASM::bl(fn_80232A34);
/*80232728 0022F528*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8023272C 0022F52C*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80232730 0022F530*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80232734 0022F534*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0xc);
/*80232738 0022F538*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8023273C 0022F53C*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x18);
/*80232740 0022F540*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*80232744 0022F544*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r7, 4, 27, 27);
/*80232748 0022F548*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*8023274C 0022F54C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x75, context->r3));
/*80232750 0022F550*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x75, context->r3));
/*80232754 0022F554*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 0, 31, 31);
/*80232758 0022F558*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x75, context->r3));
/*8023275C 0022F55C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80232760 0022F560*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80232764 0022F564*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80232768 0022F568*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8023276C 0022F56C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80232770 0022F570*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80232774 0022F574*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80232778 0022F578*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8023277C 0022F57C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*80232780 0022F580*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80232784 0022F584*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80232788 0022F588*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8023278C 0022F58C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*80232790 0022F590*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80232794 0022F594*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80232798 0022F598*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*8023279C 0022F59C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*802327A0 0022F5A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*802327A4 0022F5A4*/ PPC::Runtime::ASM::bl(fn_80232F40);
/*802327A8 0022F5A8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802327AC 0022F5AC*/ PPC::Runtime::ASM::bl(fn_802332A8);
/*802327B0 0022F5B0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1NULL9 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802327B4 0022F5B4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802327B8 0022F5B8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802327BC 0022F5BC*/ PPC::Runtime::ASM::beq(.L_802327F8);
/*802327C0 0022F5C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802327C4 0022F5C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802327C8 0022F5C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*802327CC 0022F5CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802327D0 0022F5D0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1NULL9 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802327D4 0022F5D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802327D8 0022F5D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802327DC 0022F5DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802327E0 0022F5E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802327E4 0022F5E4*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*802327E8 0022F5E8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802327EC 0022F5EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802327F0 0022F5F0*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802327F4 0022F5F4*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
RUNTIME_PPC_JUMP_LABEL(.L_802327F8, 0x802327F8) //this is a jump label
/*802327F8 0022F5F8*/ PPC::Runtime::ASM::lis(context->r4, fn_802328A4 @ Get_MemoryOffset_HighBit);
/*802327FC 0022F5FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80232800 0022F600*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_802328A4 @ Get_MemoryOffset_LowBit);
/*80232804 0022F604*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80232808 0022F608*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8023280C 0022F60C*/ PPC::Runtime::ASM::lis(context->r4, fn_802328A8 @ Get_MemoryOffset_HighBit);
/*80232810 0022F610*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80232814 0022F614*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_802328A8 @ Get_MemoryOffset_LowBit);
/*80232818 0022F618*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8023281C 0022F61C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80232820 0022F620*/ PPC::Runtime::ASM::lis(context->r4, fn_802328CC @ Get_MemoryOffset_HighBit);
/*80232824 0022F624*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80232828 0022F628*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_802328CC @ Get_MemoryOffset_LowBit);
/*8023282C 0022F62C*/ PPC::Runtime::ASM::li(context->r5, 0x15);
/*80232830 0022F630*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80232834 0022F634*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
/*80232838 0022F638*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8023283C 0022F63C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 3, 28, 28);
/*80232840 0022F640*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80232844 0022F644*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
/*80232848 0022F648*/ PPC::Runtime::ASM::bl(fn_80232FA0);
/*8023284C 0022F64C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80232850 0022F650*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2A68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80232854 0022F654*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*80232858 0022F658*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8023285C 0022F65C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2A6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80232860 0022F660*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*80232864 0022F664*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1NULL9 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80232868 0022F668*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*8023286C 0022F66C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80232870 0022F670*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*80232874 0022F674*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80232878 0022F678*/ PPC::Runtime::ASM::bl(fn_80233164);
/*8023287C 0022F67C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80232880 0022F680*/ PPC::Runtime::ASM::bl(fn_802330C4);
/*80232884 0022F684*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_80232888, 0x80232888) //this is a jump label
/*80232888 0022F688*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023288C 0022F68C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80232890 0022F690*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80232894 0022F694*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80232898 0022F698*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023289C 0022F69C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802328A0 0022F6A0*/ PPC::Runtime::ASM::blr();
}