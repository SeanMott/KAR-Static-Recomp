//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803475D0.hpp"
#include "fn_80348E40.hpp"
#include "fn_803470C8.hpp"



void fn_80346378(PPC::Runtime::GCContext* context)
{
/*80346378 00343178*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8034637C 0034317C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80346380 00343180*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80346384 00343184*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80346388 00343188*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8034638C 0034318C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80346390 00343190*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80346394 00343194*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80346398 00343198*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8034639C 0034319C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*803463A0 003431A0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r4));
/*803463A4 003431A4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803463A8 003431A8*/ PPC::Runtime::ASM::bge(.L_80346414);
/*803463AC 003431AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r28));
/*803463B0 003431B0*/ PPC::Runtime::ASM::bl(fn_803475D0);
/*803463B4 003431B4*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803463B8 003431B8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*803463BC 003431BC*/ PPC::Runtime::ASM::b(.L_803463D8);
RUNTIME_PPC_JUMP_LABEL(.L_803463C0, 0x803463C0) //this is a jump label
/*803463C0 003431C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r28));
/*803463C4 003431C4*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*803463C8 003431C8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r31);
/*803463CC 003431CC*/ PPC::Runtime::ASM::bl(fn_80348E40);
/*803463D0 003431D0*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*803463D4 003431D4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803463D8, 0x803463D8) //this is a jump label
/*803463D8 003431D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r28));
/*803463DC 003431DC*/ PPC::Runtime::ASM::cmplw(context->r30, context->r0);
/*803463E0 003431E0*/ PPC::Runtime::ASM::blt(.L_803463C0);
/*803463E4 003431E4*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803463E8 003431E8*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
/*803463EC 003431EC*/ PPC::Runtime::ASM::b(.L_80346408);
RUNTIME_PPC_JUMP_LABEL(.L_803463F0, 0x803463F0) //this is a jump label
/*803463F0 003431F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r28));
/*803463F4 003431F4*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*803463F8 003431F8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r31);
/*803463FC 003431FC*/ PPC::Runtime::ASM::bl(fn_803470C8);
/*80346400 00343200*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*80346404 00343204*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80346408, 0x80346408) //this is a jump label
/*80346408 00343208*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r28));
/*8034640C 0034320C*/ PPC::Runtime::ASM::cmplw(context->r30, context->r0);
/*80346410 00343210*/ PPC::Runtime::ASM::blt(.L_803463F0);
RUNTIME_PPC_JUMP_LABEL(.L_80346414, 0x80346414) //this is a jump label
/*80346414 00343214*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80346418 00343218*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8034641C 0034321C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80346420 00343220*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80346424 00343224*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80346428 00343228*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8034642C 0034322C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80346430 00343230*/ PPC::Runtime::ASM::blr();
}