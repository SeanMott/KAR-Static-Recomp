//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"



void fn_80226FF4(PPC::Runtime::GCContext* context)
{
/*80226FF4 00223DF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*80226FF8 00223DF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80226FFC 00223DFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80227000 00223E00*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80227004 00223E04*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80227008 00223E08*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8022700C 00223E0C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80227010 00223E10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r3));
/*80227014 00223E14*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80227018 00223E18*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8022701C 00223E1C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80227020 00223E20*/ PPC::Runtime::ASM::bne(.L_80227034);
/*80227024 00223E24*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7210 @ Get_MemoryOffset_SDA21);
/*80227028 00223E28*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*8022702C 00223E2C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7218 @ Get_MemoryOffset_SDA21);
/*80227030 00223E30*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80227034, 0x80227034) //this is a jump label
/*80227034 00223E34*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1c0);
/*80227038 00223E38*/ PPC::Runtime::ASM::bne(.L_80227050);
/*8022703C 00223E3C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B48C4 @ Get_MemoryOffset_HighBit);
/*80227040 00223E40*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7210 @ Get_MemoryOffset_SDA21);
/*80227044 00223E44*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B48C4 @ Get_MemoryOffset_LowBit);
/*80227048 00223E48*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*8022704C 00223E4C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80227050, 0x80227050) //this is a jump label
/*80227050 00223E50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*80227054 00223E54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*80227058 00223E58*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r30));
/*8022705C 00223E5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r30));
/*80227060 00223E60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*80227064 00223E64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r30));
/*80227068 00223E68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*8022706C 00223E6C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80227070 00223E70*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80227074 00223E74*/ PPC::Runtime::ASM::bne(.L_80227088);
/*80227078 00223E78*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7210 @ Get_MemoryOffset_SDA21);
/*8022707C 00223E7C*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80227080 00223E80*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7218 @ Get_MemoryOffset_SDA21);
/*80227084 00223E84*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80227088, 0x80227088) //this is a jump label
/*80227088 00223E88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8022708C 00223E8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*80227090 00223E90*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80227094 00223E94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80227098 00223E98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8022709C 00223E9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802270A0 00223EA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*802270A4 00223EA4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*802270A8 00223EA8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802270AC 00223EAC*/ PPC::Runtime::ASM::bne(.L_802270C0);
/*802270B0 00223EB0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7210 @ Get_MemoryOffset_SDA21);
/*802270B4 00223EB4*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*802270B8 00223EB8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7218 @ Get_MemoryOffset_SDA21);
/*802270BC 00223EBC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802270C0, 0x802270C0) //this is a jump label
/*802270C0 00223EC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*802270C4 00223EC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*802270C8 00223EC8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802270CC 00223ECC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802270D0 00223ED0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*802270D4 00223ED4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802270D8 00223ED8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*802270DC 00223EDC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802270E0 00223EE0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802270E4 00223EE4*/ PPC::Runtime::ASM::bne(.L_802270F8);
/*802270E8 00223EE8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7210 @ Get_MemoryOffset_SDA21);
/*802270EC 00223EEC*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*802270F0 00223EF0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7218 @ Get_MemoryOffset_SDA21);
/*802270F4 00223EF4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802270F8, 0x802270F8) //this is a jump label
/*802270F8 00223EF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*802270FC 00223EFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*80227100 00223F00*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80227104 00223F04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80227108 00223F08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8022710C 00223F0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80227110 00223F10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*80227114 00223F14*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80227118 00223F18*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8022711C 00223F1C*/ PPC::Runtime::ASM::bne(.L_80227130);
/*80227120 00223F20*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7210 @ Get_MemoryOffset_SDA21);
/*80227124 00223F24*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80227128 00223F28*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7218 @ Get_MemoryOffset_SDA21);
/*8022712C 00223F2C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80227130, 0x80227130) //this is a jump label
/*80227130 00223F30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*80227134 00223F34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*80227138 00223F38*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022713C 00223F3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80227140 00223F40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*80227144 00223F44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80227148 00223F48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*8022714C 00223F4C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*80227150 00223F50*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80227154 00223F54*/ PPC::Runtime::ASM::bne(.L_80227168);
/*80227158 00223F58*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7210 @ Get_MemoryOffset_SDA21);
/*8022715C 00223F5C*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80227160 00223F60*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7218 @ Get_MemoryOffset_SDA21);
/*80227164 00223F64*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80227168, 0x80227168) //this is a jump label
/*80227168 00223F68*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8022716C 00223F6C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80227170 00223F70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*80227174 00223F74*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x1c0);
/*80227178 00223F78*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1cc);
/*8022717C 00223F7C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80227180 00223F80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80227184 00223F84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*80227188 00223F88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8022718C 00223F8C*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*80227190 00223F90*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80227194 00223F94*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*80227198 00223F98*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1d8);
/*8022719C 00223F9C*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*802271A0 00223FA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802271A4 00223FA4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*802271A8 00223FA8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1e4);
/*802271AC 00223FAC*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*802271B0 00223FB0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802271B4 00223FB4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*802271B8 00223FB8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1f0);
/*802271BC 00223FBC*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*802271C0 00223FC0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802271C4 00223FC4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*802271C8 00223FC8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1fc);
/*802271CC 00223FCC*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*802271D0 00223FD0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802271D4 00223FD4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802271D8 00223FD8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x208);
/*802271DC 00223FDC*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*802271E0 00223FE0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1c0);
/*802271E4 00223FE4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*802271E8 00223FE8*/ PPC::Runtime::ASM::bl(fn_803D22F4);
/*802271EC 00223FEC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x214, context->r30));
/*802271F0 00223FF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802271F4 00223FF4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802271F8 00223FF8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*802271FC 00223FFC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80227200 00224000*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80227204 00224004*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*80227208 00224008*/ PPC::Runtime::ASM::blr();
}