//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803D2140.hpp"
#include "fn_PSVECScale.hpp"
#include "fn_PSVECDotProduct.hpp"
#include "fn_PSVECScale.hpp"
#include "fn_PSVECSubtract.hpp"
#include "fn_803D2140.hpp"
#include "fn_PSVECScale.hpp"
#include "fn_PSVECDotProduct.hpp"
#include "fn_PSVECScale.hpp"
#include "fn_PSVECSubtract.hpp"
#include "fn_PSVECDotProduct.hpp"
#include "fn_PSVECScale.hpp"
#include "fn_PSVECSubtract.hpp"
#include "fn_803D2140.hpp"
#include "fn_PSVECCrossProduct.hpp"
#include "fn_PSVECDotProduct.hpp"
#include "fn_PSVECDotProduct.hpp"
#include "fn_PSVECScale.hpp"
#include "fn_PSVECSubtract.hpp"
#include "fn_803D2140.hpp"
#include "fn_803D2140.hpp"
#include "fn_PSVECScale.hpp"
#include "fn_PSVECDotProduct.hpp"
#include "fn_PSVECScale.hpp"
#include "fn_PSVECSubtract.hpp"
#include "fn_803D2158.hpp"
#include "fn_803D2158.hpp"



void fn_HSD_MtxGetScale(PPC::Runtime::GCContext* context)
{
/*80416B24 00413924*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*80416B28 00413928*/ PPC::Runtime::ASM::mflr(context->r0);
/*80416B2C 0041392C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80416B30 00413930*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80416B34 00413934*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80416B38 00413938*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80416B3C 0041393C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80416B40 00413940*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80416B44 00413944*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*80416B48 00413948*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80416B4C 0041394C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80416B50 00413950*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80416B54 00413954*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80416B58 00413958*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80416B5C 0041395C*/ PPC::Runtime::ASM::bl(fn_803D2140);
/*80416B60 00413960*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5CA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416B64 00413964*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80416B68 00413968*/ PPC::Runtime::ASM::ble(.L_80416EBC);
/*80416B6C 0041396C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5C38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416B70 00413970*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416B74 00413974*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*80416B78 00413978*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80416B7C 0041397C*/ PPC::Runtime::ASM::ble(.L_80416BCC);
/*80416B80 00413980*/ PPC::Runtime::ASM::frsqrte(context->f2, context->f1);
/*80416B84 00413984*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E5C40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416B88 00413988*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5C48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416B8C 0041398C*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416B90 00413990*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416B94 00413994*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416B98 00413998*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*80416B9C 0041399C*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416BA0 004139A0*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416BA4 004139A4*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416BA8 004139A8*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*80416BAC 004139AC*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416BB0 004139B0*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416BB4 004139B4*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416BB8 004139B8*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f0);
/*80416BBC 004139BC*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*80416BC0 004139C0*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80416BC4 004139C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80416BC8 004139C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80416BCC, 0x80416BCC) //this is a jump label
/*80416BCC 004139CC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416BD0 004139D0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*80416BD4 004139D4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80416BD8 004139D8*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f1);
/*80416BDC 004139DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80416BE0 004139E0*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80416BE4 004139E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80416BE8 004139E8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*80416BEC 004139EC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x34);
/*80416BF0 004139F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80416BF4 004139F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80416BF8 004139F8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80416BFC 004139FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80416C00 00413A00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80416C04 00413A04*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*80416C08 00413A08*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*80416C0C 00413A0C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80416C10 00413A10*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80416C14 00413A14*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x34);
/*80416C18 00413A18*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80416C1C 00413A1C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80416C20 00413A20*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*80416C24 00413A24*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x34);
/*80416C28 00413A28*/ PPC::Runtime::ASM::bl(fn_803D2140);
/*80416C2C 00413A2C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5CA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416C30 00413A30*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80416C34 00413A34*/ PPC::Runtime::ASM::ble(.L_80416DF4);
/*80416C38 00413A38*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5C38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416C3C 00413A3C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416C40 00413A40*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*80416C44 00413A44*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80416C48 00413A48*/ PPC::Runtime::ASM::ble(.L_80416C98);
/*80416C4C 00413A4C*/ PPC::Runtime::ASM::frsqrte(context->f2, context->f1);
/*80416C50 00413A50*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E5C40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416C54 00413A54*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5C48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416C58 00413A58*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416C5C 00413A5C*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416C60 00413A60*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416C64 00413A64*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*80416C68 00413A68*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416C6C 00413A6C*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416C70 00413A70*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416C74 00413A74*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*80416C78 00413A78*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416C7C 00413A7C*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416C80 00413A80*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416C84 00413A84*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f0);
/*80416C88 00413A88*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*80416C8C 00413A8C*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80416C90 00413A90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80416C94 00413A94*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80416C98, 0x80416C98) //this is a jump label
/*80416C98 00413A98*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416C9C 00413A9C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x34);
/*80416CA0 00413AA0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80416CA4 00413AA4*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f1);
/*80416CA8 00413AA8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80416CAC 00413AAC*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80416CB0 00413AB0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80416CB4 00413AB4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x34);
/*80416CB8 00413AB8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x28);
/*80416CBC 00413ABC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80416CC0 00413AC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80416CC4 00413AC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80416CC8 00413AC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80416CCC 00413ACC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80416CD0 00413AD0*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*80416CD4 00413AD4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x34);
/*80416CD8 00413AD8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80416CDC 00413ADC*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80416CE0 00413AE0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*80416CE4 00413AE4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80416CE8 00413AE8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80416CEC 00413AEC*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*80416CF0 00413AF0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*80416CF4 00413AF4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x28);
/*80416CF8 00413AF8*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*80416CFC 00413AFC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*80416D00 00413B00*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80416D04 00413B04*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80416D08 00413B08*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*80416D0C 00413B0C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80416D10 00413B10*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80416D14 00413B14*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*80416D18 00413B18*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*80416D1C 00413B1C*/ PPC::Runtime::ASM::bl(fn_803D2140);
/*80416D20 00413B20*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5CA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416D24 00413B24*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80416D28 00413B28*/ PPC::Runtime::ASM::ble(.L_80416DE8);
/*80416D2C 00413B2C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416D30 00413B30*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80416D34 00413B34*/ PPC::Runtime::ASM::ble(.L_80416D84);
/*80416D38 00413B38*/ PPC::Runtime::ASM::frsqrte(context->f2, context->f1);
/*80416D3C 00413B3C*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E5C40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416D40 00413B40*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5C48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416D44 00413B44*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416D48 00413B48*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416D4C 00413B4C*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416D50 00413B50*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*80416D54 00413B54*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416D58 00413B58*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416D5C 00413B5C*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416D60 00413B60*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*80416D64 00413B64*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416D68 00413B68*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416D6C 00413B6C*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416D70 00413B70*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f0);
/*80416D74 00413B74*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*80416D78 00413B78*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80416D7C 00413B7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80416D80 00413B80*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80416D84, 0x80416D84) //this is a jump label
/*80416D84 00413B84*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80416D88 00413B88*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x34);
/*80416D8C 00413B8C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x28);
/*80416D90 00413B90*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x1c);
/*80416D94 00413B94*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*80416D98 00413B98*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*80416D9C 00413B9C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80416DA0 00413BA0*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*80416DA4 00413BA4*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5CA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416DA8 00413BA8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80416DAC 00413BAC*/ PPC::Runtime::ASM::bge(.L_80416FE4);
/*80416DB0 00413BB0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80416DB4 00413BB4*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5CB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416DB8 00413BB8*/ PPC::Runtime::ASM::fmul(context->f0, context->f0, context->f1);
/*80416DBC 00413BBC*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80416DC0 00413BC0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80416DC4 00413BC4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80416DC8 00413BC8*/ PPC::Runtime::ASM::fmul(context->f0, context->f0, context->f1);
/*80416DCC 00413BCC*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80416DD0 00413BD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80416DD4 00413BD4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80416DD8 00413BD8*/ PPC::Runtime::ASM::fmul(context->f0, context->f0, context->f1);
/*80416DDC 00413BDC*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80416DE0 00413BE0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80416DE4 00413BE4*/ PPC::Runtime::ASM::b(.L_80416FE4);
RUNTIME_PPC_JUMP_LABEL(.L_80416DE8, 0x80416DE8) //this is a jump label
/*80416DE8 00413BE8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416DEC 00413BEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80416DF0 00413BF0*/ PPC::Runtime::ASM::b(.L_80416FE4);
RUNTIME_PPC_JUMP_LABEL(.L_80416DF4, 0x80416DF4) //this is a jump label
/*80416DF4 00413BF4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416DF8 00413BF8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*80416DFC 00413BFC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x28);
/*80416E00 00413C00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80416E04 00413C04*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80416E08 00413C08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80416E0C 00413C0C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80416E10 00413C10*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80416E14 00413C14*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80416E18 00413C18*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80416E1C 00413C1C*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*80416E20 00413C20*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*80416E24 00413C24*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80416E28 00413C28*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80416E2C 00413C2C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*80416E30 00413C30*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80416E34 00413C34*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80416E38 00413C38*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*80416E3C 00413C3C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*80416E40 00413C40*/ PPC::Runtime::ASM::bl(fn_803D2140);
/*80416E44 00413C44*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5CA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416E48 00413C48*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80416E4C 00413C4C*/ PPC::Runtime::ASM::ble(.L_80416EB0);
/*80416E50 00413C50*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416E54 00413C54*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80416E58 00413C58*/ PPC::Runtime::ASM::ble(.L_80416EA8);
/*80416E5C 00413C5C*/ PPC::Runtime::ASM::frsqrte(context->f2, context->f1);
/*80416E60 00413C60*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E5C40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416E64 00413C64*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5C48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416E68 00413C68*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416E6C 00413C6C*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416E70 00413C70*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416E74 00413C74*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*80416E78 00413C78*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416E7C 00413C7C*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416E80 00413C80*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416E84 00413C84*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*80416E88 00413C88*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416E8C 00413C8C*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416E90 00413C90*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416E94 00413C94*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f0);
/*80416E98 00413C98*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*80416E9C 00413C9C*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80416EA0 00413CA0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80416EA4 00413CA4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80416EA8, 0x80416EA8) //this is a jump label
/*80416EA8 00413CA8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80416EAC 00413CAC*/ PPC::Runtime::ASM::b(.L_80416FE4);
RUNTIME_PPC_JUMP_LABEL(.L_80416EB0, 0x80416EB0) //this is a jump label
/*80416EB0 00413CB0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416EB4 00413CB4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80416EB8 00413CB8*/ PPC::Runtime::ASM::b(.L_80416FE4);
RUNTIME_PPC_JUMP_LABEL(.L_80416EBC, 0x80416EBC) //this is a jump label
/*80416EBC 00413CBC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416EC0 00413CC0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x34);
/*80416EC4 00413CC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80416EC8 00413CC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80416ECC 00413CCC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80416ED0 00413CD0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80416ED4 00413CD4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80416ED8 00413CD8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80416EDC 00413CDC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80416EE0 00413CE0*/ PPC::Runtime::ASM::bl(fn_803D2140);
/*80416EE4 00413CE4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5CA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416EE8 00413CE8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80416EEC 00413CEC*/ PPC::Runtime::ASM::ble(.L_80416FB8);
/*80416EF0 00413CF0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5C38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416EF4 00413CF4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416EF8 00413CF8*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*80416EFC 00413CFC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80416F00 00413D00*/ PPC::Runtime::ASM::ble(.L_80416F50);
/*80416F04 00413D04*/ PPC::Runtime::ASM::frsqrte(context->f2, context->f1);
/*80416F08 00413D08*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E5C40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416F0C 00413D0C*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5C48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416F10 00413D10*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416F14 00413D14*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416F18 00413D18*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416F1C 00413D1C*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*80416F20 00413D20*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416F24 00413D24*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416F28 00413D28*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416F2C 00413D2C*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*80416F30 00413D30*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*80416F34 00413D34*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*80416F38 00413D38*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80416F3C 00413D3C*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f0);
/*80416F40 00413D40*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*80416F44 00413D44*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80416F48 00413D48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80416F4C 00413D4C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80416F50, 0x80416F50) //this is a jump label
/*80416F50 00413D50*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416F54 00413D54*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x34);
/*80416F58 00413D58*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80416F5C 00413D5C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f1);
/*80416F60 00413D60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80416F64 00413D64*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80416F68 00413D68*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80416F6C 00413D6C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x34);
/*80416F70 00413D70*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x28);
/*80416F74 00413D74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80416F78 00413D78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80416F7C 00413D7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80416F80 00413D80*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80416F84 00413D84*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80416F88 00413D88*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*80416F8C 00413D8C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x34);
/*80416F90 00413D90*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80416F94 00413D94*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80416F98 00413D98*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*80416F9C 00413D9C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80416FA0 00413DA0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80416FA4 00413DA4*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*80416FA8 00413DA8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*80416FAC 00413DAC*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*80416FB0 00413DB0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80416FB4 00413DB4*/ PPC::Runtime::ASM::b(.L_80416FE4);
RUNTIME_PPC_JUMP_LABEL(.L_80416FB8, 0x80416FB8) //this is a jump label
/*80416FB8 00413DB8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5C3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80416FBC 00413DBC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*80416FC0 00413DC0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80416FC4 00413DC4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80416FC8 00413DC8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80416FCC 00413DCC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80416FD0 00413DD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80416FD4 00413DD4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80416FD8 00413DD8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80416FDC 00413DDC*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*80416FE0 00413DE0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80416FE4, 0x80416FE4) //this is a jump label
/*80416FE4 00413DE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80416FE8 00413DE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80416FEC 00413DEC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80416FF0 00413DF0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80416FF4 00413DF4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*80416FF8 00413DF8*/ PPC::Runtime::ASM::blr();
}