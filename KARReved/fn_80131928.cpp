//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80059798.hpp"
#include "fn_80138D38.hpp"
#include "fn_80138E2C.hpp"
#include "fn_80138F70.hpp"
#include "fn_801390A4.hpp"
#include "fn_80139240.hpp"



void fn_80131928(PPC::Runtime::GCContext* context)
{
/*80131928 0012E728*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8013192C 0012E72C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80131930 0012E730*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*80131934 0012E734*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80131938 0012E738*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*8013193C 0012E73C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80131940 0012E740*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80131944 0012E744*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80131948 0012E748*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013194C 0012E74C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80131950 0012E750*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80131954 0012E754*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80131958 0012E758*/ PPC::Runtime::ASM::beq(.L_80131968);
/*8013195C 0012E75C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80131960 0012E760*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131964 0012E764*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80131968, 0x80131968) //this is a jump label
/*80131968 0012E768*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8013196C 0012E76C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80131970 0012E770*/ PPC::Runtime::ASM::beq(.L_80131980);
/*80131974 0012E774*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80131978 0012E778*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013197C 0012E77C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80131980, 0x80131980) //this is a jump label
/*80131980 0012E780*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xebc, context->r31));
/*80131984 0012E784*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80131988 0012E788*/ PPC::Runtime::ASM::beq(.L_80131998);
/*8013198C 0012E78C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80131990 0012E790*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131994 0012E794*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xebc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80131998, 0x80131998) //this is a jump label
/*80131998 0012E798*/ PPC::Runtime::ASM::mr(context->r29, context->r31);
/*8013199C 0012E79C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*801319A0 0012E7A0*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801319A4, 0x801319A4) //this is a jump label
/*801319A4 0012E7A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r29));
/*801319A8 0012E7A8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801319AC 0012E7AC*/ PPC::Runtime::ASM::beq(.L_801319B8);
/*801319B0 0012E7B0*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*801319B4 0012E7B4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_801319B8, 0x801319B8) //this is a jump label
/*801319B8 0012E7B8*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*801319BC 0012E7BC*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*801319C0 0012E7C0*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x4);
/*801319C4 0012E7C4*/ PPC::Runtime::ASM::blt(.L_801319A4);
/*801319C8 0012E7C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r31));
/*801319CC 0012E7CC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801319D0 0012E7D0*/ PPC::Runtime::ASM::beq(.L_801319E0);
/*801319D4 0012E7D4*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*801319D8 0012E7D8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801319DC 0012E7DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801319E0, 0x801319E0) //this is a jump label
/*801319E0 0012E7E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r31));
/*801319E4 0012E7E4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801319E8 0012E7E8*/ PPC::Runtime::ASM::beq(.L_801319F8);
/*801319EC 0012E7EC*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*801319F0 0012E7F0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801319F4 0012E7F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801319F8, 0x801319F8) //this is a jump label
/*801319F8 0012E7F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc0, context->r31));
/*801319FC 0012E7FC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80131A00 0012E800*/ PPC::Runtime::ASM::beq(.L_80131A10);
/*80131A04 0012E804*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80131A08 0012E808*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131A0C 0012E80C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80131A10, 0x80131A10) //this is a jump label
/*80131A10 0012E810*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc4, context->r31));
/*80131A14 0012E814*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80131A18 0012E818*/ PPC::Runtime::ASM::beq(.L_80131A28);
/*80131A1C 0012E81C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80131A20 0012E820*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131A24 0012E824*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80131A28, 0x80131A28) //this is a jump label
/*80131A28 0012E828*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc8, context->r31));
/*80131A2C 0012E82C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80131A30 0012E830*/ PPC::Runtime::ASM::beq(.L_80131A40);
/*80131A34 0012E834*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80131A38 0012E838*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131A3C 0012E83C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80131A40, 0x80131A40) //this is a jump label
/*80131A40 0012E840*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80131A44 0012E844*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80131A48 0012E848*/ PPC::Runtime::ASM::beq(.L_80131A58);
/*80131A4C 0012E84C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80131A50 0012E850*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131A54 0012E854*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80131A58, 0x80131A58) //this is a jump label
/*80131A58 0012E858*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80131A5C 0012E85C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80131A60 0012E860*/ PPC::Runtime::ASM::beq(.L_80131A70);
/*80131A64 0012E864*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80131A68 0012E868*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131A6C 0012E86C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80131A70, 0x80131A70) //this is a jump label
/*80131A70 0012E870*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*80131A74 0012E874*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*80131A78 0012E878*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
/*80131A7C 0012E87C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80131A80 0012E880*/ PPC::Runtime::ASM::beq(.L_80131A90);
/*80131A84 0012E884*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80131A88 0012E888*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131A8C 0012E88C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80131A90, 0x80131A90) //this is a jump label
/*80131A90 0012E890*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131A94 0012E894*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7C8 @ Get_MemoryOffset_SDA21);
/*80131A98 0012E898*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131A9C 0012E89C*/ PPC::Runtime::ASM::beq(.L_80131AB0);
/*80131AA0 0012E8A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131AA4 0012E8A4*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131AA8 0012E8A8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131AAC 0012E8AC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131AB0, 0x80131AB0) //this is a jump label
/*80131AB0 0012E8B0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD798 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131AB4 0012E8B4*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD798 @ Get_MemoryOffset_SDA21);
/*80131AB8 0012E8B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131ABC 0012E8BC*/ PPC::Runtime::ASM::beq(.L_80131AD0);
/*80131AC0 0012E8C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131AC4 0012E8C4*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131AC8 0012E8C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131ACC 0012E8CC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD798 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131AD0, 0x80131AD0) //this is a jump label
/*80131AD0 0012E8D0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131AD4 0012E8D4*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7C4 @ Get_MemoryOffset_SDA21);
/*80131AD8 0012E8D8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131ADC 0012E8DC*/ PPC::Runtime::ASM::beq(.L_80131AF0);
/*80131AE0 0012E8E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131AE4 0012E8E4*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131AE8 0012E8E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131AEC 0012E8EC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131AF0, 0x80131AF0) //this is a jump label
/*80131AF0 0012E8F0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131AF4 0012E8F4*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7C0 @ Get_MemoryOffset_SDA21);
/*80131AF8 0012E8F8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131AFC 0012E8FC*/ PPC::Runtime::ASM::beq(.L_80131B10);
/*80131B00 0012E900*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131B04 0012E904*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131B08 0012E908*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131B0C 0012E90C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131B10, 0x80131B10) //this is a jump label
/*80131B10 0012E910*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131B14 0012E914*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7BC @ Get_MemoryOffset_SDA21);
/*80131B18 0012E918*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131B1C 0012E91C*/ PPC::Runtime::ASM::beq(.L_80131B30);
/*80131B20 0012E920*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131B24 0012E924*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131B28 0012E928*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131B2C 0012E92C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131B30, 0x80131B30) //this is a jump label
/*80131B30 0012E930*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131B34 0012E934*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7B8 @ Get_MemoryOffset_SDA21);
/*80131B38 0012E938*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131B3C 0012E93C*/ PPC::Runtime::ASM::beq(.L_80131B50);
/*80131B40 0012E940*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131B44 0012E944*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131B48 0012E948*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131B4C 0012E94C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131B50, 0x80131B50) //this is a jump label
/*80131B50 0012E950*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131B54 0012E954*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7B4 @ Get_MemoryOffset_SDA21);
/*80131B58 0012E958*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131B5C 0012E95C*/ PPC::Runtime::ASM::beq(.L_80131B70);
/*80131B60 0012E960*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131B64 0012E964*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131B68 0012E968*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131B6C 0012E96C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131B70, 0x80131B70) //this is a jump label
/*80131B70 0012E970*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131B74 0012E974*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7E0 @ Get_MemoryOffset_SDA21);
/*80131B78 0012E978*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131B7C 0012E97C*/ PPC::Runtime::ASM::beq(.L_80131B90);
/*80131B80 0012E980*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131B84 0012E984*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131B88 0012E988*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131B8C 0012E98C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131B90, 0x80131B90) //this is a jump label
/*80131B90 0012E990*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131B94 0012E994*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7DC @ Get_MemoryOffset_SDA21);
/*80131B98 0012E998*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131B9C 0012E99C*/ PPC::Runtime::ASM::beq(.L_80131BB0);
/*80131BA0 0012E9A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131BA4 0012E9A4*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131BA8 0012E9A8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131BAC 0012E9AC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131BB0, 0x80131BB0) //this is a jump label
/*80131BB0 0012E9B0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131BB4 0012E9B4*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7D8 @ Get_MemoryOffset_SDA21);
/*80131BB8 0012E9B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131BBC 0012E9BC*/ PPC::Runtime::ASM::beq(.L_80131BD0);
/*80131BC0 0012E9C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131BC4 0012E9C4*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131BC8 0012E9C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131BCC 0012E9CC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131BD0, 0x80131BD0) //this is a jump label
/*80131BD0 0012E9D0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131BD4 0012E9D4*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7D4 @ Get_MemoryOffset_SDA21);
/*80131BD8 0012E9D8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131BDC 0012E9DC*/ PPC::Runtime::ASM::beq(.L_80131BF0);
/*80131BE0 0012E9E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131BE4 0012E9E4*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131BE8 0012E9E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131BEC 0012E9EC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131BF0, 0x80131BF0) //this is a jump label
/*80131BF0 0012E9F0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131BF4 0012E9F4*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7D0 @ Get_MemoryOffset_SDA21);
/*80131BF8 0012E9F8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131BFC 0012E9FC*/ PPC::Runtime::ASM::beq(.L_80131C10);
/*80131C00 0012EA00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131C04 0012EA04*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131C08 0012EA08*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131C0C 0012EA0C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131C10, 0x80131C10) //this is a jump label
/*80131C10 0012EA10*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131C14 0012EA14*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7CC @ Get_MemoryOffset_SDA21);
/*80131C18 0012EA18*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131C1C 0012EA1C*/ PPC::Runtime::ASM::beq(.L_80131C30);
/*80131C20 0012EA20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131C24 0012EA24*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131C28 0012EA28*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131C2C 0012EA2C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131C30, 0x80131C30) //this is a jump label
/*80131C30 0012EA30*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131C34 0012EA34*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7B0 @ Get_MemoryOffset_SDA21);
/*80131C38 0012EA38*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131C3C 0012EA3C*/ PPC::Runtime::ASM::beq(.L_80131C50);
/*80131C40 0012EA40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131C44 0012EA44*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131C48 0012EA48*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131C4C 0012EA4C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131C50, 0x80131C50) //this is a jump label
/*80131C50 0012EA50*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131C54 0012EA54*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7AC @ Get_MemoryOffset_SDA21);
/*80131C58 0012EA58*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131C5C 0012EA5C*/ PPC::Runtime::ASM::beq(.L_80131C70);
/*80131C60 0012EA60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131C64 0012EA64*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131C68 0012EA68*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131C6C 0012EA6C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131C70, 0x80131C70) //this is a jump label
/*80131C70 0012EA70*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131C74 0012EA74*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7A8 @ Get_MemoryOffset_SDA21);
/*80131C78 0012EA78*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131C7C 0012EA7C*/ PPC::Runtime::ASM::beq(.L_80131C90);
/*80131C80 0012EA80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131C84 0012EA84*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131C88 0012EA88*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131C8C 0012EA8C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131C90, 0x80131C90) //this is a jump label
/*80131C90 0012EA90*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131C94 0012EA94*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7A4 @ Get_MemoryOffset_SDA21);
/*80131C98 0012EA98*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131C9C 0012EA9C*/ PPC::Runtime::ASM::beq(.L_80131CB0);
/*80131CA0 0012EAA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131CA4 0012EAA4*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131CA8 0012EAA8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131CAC 0012EAAC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131CB0, 0x80131CB0) //this is a jump label
/*80131CB0 0012EAB0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131CB4 0012EAB4*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7A0 @ Get_MemoryOffset_SDA21);
/*80131CB8 0012EAB8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131CBC 0012EABC*/ PPC::Runtime::ASM::beq(.L_80131CD0);
/*80131CC0 0012EAC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131CC4 0012EAC4*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131CC8 0012EAC8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131CCC 0012EACC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD7A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131CD0, 0x80131CD0) //this is a jump label
/*80131CD0 0012EAD0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD79C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131CD4 0012EAD4*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD79C @ Get_MemoryOffset_SDA21);
/*80131CD8 0012EAD8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131CDC 0012EADC*/ PPC::Runtime::ASM::beq(.L_80131CF0);
/*80131CE0 0012EAE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131CE4 0012EAE4*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131CE8 0012EAE8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131CEC 0012EAEC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD79C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131CF0, 0x80131CF0) //this is a jump label
/*80131CF0 0012EAF0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD794 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80131CF4 0012EAF4*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD794 @ Get_MemoryOffset_SDA21);
/*80131CF8 0012EAF8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80131CFC 0012EAFC*/ PPC::Runtime::ASM::beq(.L_80131D10);
/*80131D00 0012EB00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80131D04 0012EB04*/ PPC::Runtime::ASM::bl(fn_80059798);
/*80131D08 0012EB08*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80131D0C 0012EB0C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD794 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80131D10, 0x80131D10) //this is a jump label
/*80131D10 0012EB10*/ PPC::Runtime::ASM::bl(fn_80138D38);
/*80131D14 0012EB14*/ PPC::Runtime::ASM::bl(fn_80138E2C);
/*80131D18 0012EB18*/ PPC::Runtime::ASM::bl(fn_80138F70);
/*80131D1C 0012EB1C*/ PPC::Runtime::ASM::bl(fn_801390A4);
/*80131D20 0012EB20*/ PPC::Runtime::ASM::bl(fn_80139240);
/*80131D24 0012EB24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80131D28 0012EB28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80131D2C 0012EB2C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80131D30 0012EB30*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80131D34 0012EB34*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80131D38 0012EB38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80131D3C 0012EB3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80131D40 0012EB40*/ PPC::Runtime::ASM::blr();
}