//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114904.hpp"
#include "fn_8011BF2C.hpp"
#include "fn_8011BF2C.hpp"
#include "fn_80114D9C.hpp"
#include "fn_80114E24.hpp"
#include "fn_8006176C.hpp"



void fn_8011C040(PPC::Runtime::GCContext* context)
{
/*8011C040 00118E40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8011C044 00118E44*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011C048 00118E48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011C04C 00118E4C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8011C050 00118E50*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8011C054 00118E54*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8011C058 00118E58*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8011C05C 00118E5C*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011C060 00118E60*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x4);
/*8011C064 00118E64*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x2b4);
/*8011C068 00118E68*/ PPC::Runtime::ASM::bge(.L_8011C124);
/*8011C06C 00118E6C*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x4);
/*8011C070 00118E70*/ PPC::Runtime::ASM::blt(.L_8011C078);
/*8011C074 00118E74*/ PPC::Runtime::ASM::b(.L_8011C124);
RUNTIME_PPC_JUMP_LABEL(.L_8011C078, 0x8011C078) //this is a jump label
/*8011C078 00118E78*/ PPC::Runtime::ASM::slwi(context->r0, context->r26, 2);
/*8011C07C 00118E7C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8011C080 00118E80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2cc, context->r3));
/*8011C084 00118E84*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8011C088 00118E88*/ PPC::Runtime::ASM::bne(.L_8011C124);
/*8011C08C 00118E8C*/ PPC::Runtime::ASM::slwi(context->r0, context->r27, 2);
/*8011C090 00118E90*/ PPC::Runtime::ASM::add(context->r31, context->r30, context->r0);
/*8011C094 00118E94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8011C098 00118E98*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8011C09C 00118E9C*/ PPC::Runtime::ASM::beq(.L_8011C0B4);
/*8011C0A0 00118EA0*/ PPC::Runtime::ASM::beq(.L_8011C124);
/*8011C0A4 00118EA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8011C0A8 00118EA8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8011C0AC 00118EAC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8011C0B0 00118EB0*/ PPC::Runtime::ASM::b(.L_8011C124);
RUNTIME_PPC_JUMP_LABEL(.L_8011C0B4, 0x8011C0B4) //this is a jump label
/*8011C0B4 00118EB4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8011C0B8 00118EB8*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8011C0BC 00118EBC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8011C0C0 00118EC0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8011C0C4 00118EC4*/ PPC::Runtime::ASM::bl(fn_80114904);
/*8011C0C8 00118EC8*/ PPC::Runtime::ASM::lis(context->r4, fn_8011BF2C @ Get_MemoryOffset_HighBit);
/*8011C0CC 00118ECC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8011C0D0 00118ED0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8011C0D4 00118ED4*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*8011C0D8 00118ED8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8011BF2C @ Get_MemoryOffset_LowBit);
/*8011C0DC 00118EDC*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8011C0E0 00118EE0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8011C0E4 00118EE4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8011C0E8 00118EE8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFCC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011C0EC 00118EEC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8011C0F0 00118EF0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFCCC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011C0F4 00118EF4*/ PPC::Runtime::ASM::bl(fn_80114D9C);
/*8011C0F8 00118EF8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011C0FC 00118EFC*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*8011C100 00118F00*/ PPC::Runtime::ASM::mr(context->r6, context->r27);
/*8011C104 00118F04*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*8011C108 00118F08*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*8011C10C 00118F0C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8011C110 00118F10*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*8011C114 00118F14*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8011C118 00118F18*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x9);
/*8011C11C 00118F1C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8011C120 00118F20*/ PPC::Runtime::ASM::bl(fn_8006176C);
RUNTIME_PPC_JUMP_LABEL(.L_8011C124, 0x8011C124) //this is a jump label
/*8011C124 00118F24*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8011C128 00118F28*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8011C12C 00118F2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011C130 00118F30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011C134 00118F34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8011C138 00118F38*/ PPC::Runtime::ASM::blr();
}