//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_ceil(PPC::Runtime::GCContext* context)
{
/*803BCB64 003B9964*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803BCB68 003B9968*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BCB6C 003B996C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BCB70 003B9970*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803BCB74 003B9974*/ PPC::Runtime::ASM::extrwi(context->r3, context->r5, 11, 1);
/*803BCB78 003B9978*/ PPC::Runtime::ASM::subi(context->r7, context->r3, 0x3ff);
/*803BCB7C 003B997C*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x14);
/*803BCB80 003B9980*/ PPC::Runtime::ASM::bge(.L_803BCC14);
/*803BCB84 003B9984*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*803BCB88 003B9988*/ PPC::Runtime::ASM::bge(.L_803BCBC8);
/*803BCB8C 003B998C*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E56F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BCB90 003B9990*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E56F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BCB94 003B9994*/ PPC::Runtime::ASM::fadd(context->f1, context->f2, context->f1);
/*803BCB98 003B9998*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803BCB9C 003B999C*/ PPC::Runtime::ASM::ble(.L_803BCC94);
/*803BCBA0 003B99A0*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*803BCBA4 003B99A4*/ PPC::Runtime::ASM::bge(.L_803BCBB4);
/*803BCBA8 003B99A8*/ PPC::Runtime::ASM::lis(context->r5, 0x8000);
/*803BCBAC 003B99AC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*803BCBB0 003B99B0*/ PPC::Runtime::ASM::b(.L_803BCC94);
RUNTIME_PPC_JUMP_LABEL(.L_803BCBB4, 0x803BCBB4) //this is a jump label
/*803BCBB4 003B99B4*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r6);
/*803BCBB8 003B99B8*/ PPC::Runtime::ASM::beq(.L_803BCC94);
/*803BCBBC 003B99BC*/ PPC::Runtime::ASM::lis(context->r5, 0x3ff0);
/*803BCBC0 003B99C0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*803BCBC4 003B99C4*/ PPC::Runtime::ASM::b(.L_803BCC94);
RUNTIME_PPC_JUMP_LABEL(.L_803BCBC8, 0x803BCBC8) //this is a jump label
/*803BCBC8 003B99C8*/ PPC::Runtime::ASM::lis(context->r3, 0x10);
/*803BCBCC 003B99CC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803BCBD0 003B99D0*/ PPC::Runtime::ASM::sraw(context->r4, context->r0, context->r7);
/*803BCBD4 003B99D4*/ PPC::Runtime::ASM::and(context->r0, context->r5, context->r4);
/*803BCBD8 003B99D8*/ PPC::Runtime::ASM::or.(context->r0, context->r6, context->r0);
/*803BCBDC 003B99DC*/ PPC::Runtime::ASM::bne(.L_803BCBE4);
/*803BCBE0 003B99E0*/ PPC::Runtime::ASM::b(.L_803BCCA0);
RUNTIME_PPC_JUMP_LABEL(.L_803BCBE4, 0x803BCBE4) //this is a jump label
/*803BCBE4 003B99E4*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E56F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BCBE8 003B99E8*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E56F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BCBEC 003B99EC*/ PPC::Runtime::ASM::fadd(context->f1, context->f2, context->f1);
/*803BCBF0 003B99F0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803BCBF4 003B99F4*/ PPC::Runtime::ASM::ble(.L_803BCC94);
/*803BCBF8 003B99F8*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*803BCBFC 003B99FC*/ PPC::Runtime::ASM::ble(.L_803BCC08);
/*803BCC00 003B9A00*/ PPC::Runtime::ASM::sraw(context->r0, context->r3, context->r7);
/*803BCC04 003B9A04*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803BCC08, 0x803BCC08) //this is a jump label
/*803BCC08 003B9A08*/ PPC::Runtime::ASM::andc(context->r5, context->r5, context->r4);
/*803BCC0C 003B9A0C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*803BCC10 003B9A10*/ PPC::Runtime::ASM::b(.L_803BCC94);
RUNTIME_PPC_JUMP_LABEL(.L_803BCC14, 0x803BCC14) //this is a jump label
/*803BCC14 003B9A14*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x33);
/*803BCC18 003B9A18*/ PPC::Runtime::ASM::ble(.L_803BCC2C);
/*803BCC1C 003B9A1C*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x400);
/*803BCC20 003B9A20*/ PPC::Runtime::ASM::bne(.L_803BCCA0);
/*803BCC24 003B9A24*/ PPC::Runtime::ASM::fadd(context->f1, context->f1, context->f1);
/*803BCC28 003B9A28*/ PPC::Runtime::ASM::b(.L_803BCCA0);
RUNTIME_PPC_JUMP_LABEL(.L_803BCC2C, 0x803BCC2C) //this is a jump label
/*803BCC2C 003B9A2C*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x14);
/*803BCC30 003B9A30*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*803BCC34 003B9A34*/ PPC::Runtime::ASM::srw(context->r4, context->r3, context->r0);
/*803BCC38 003B9A38*/ PPC::Runtime::ASM::and.(context->r0, context->r6, context->r4);
/*803BCC3C 003B9A3C*/ PPC::Runtime::ASM::bne(.L_803BCC44);
/*803BCC40 003B9A40*/ PPC::Runtime::ASM::b(.L_803BCCA0);
RUNTIME_PPC_JUMP_LABEL(.L_803BCC44, 0x803BCC44) //this is a jump label
/*803BCC44 003B9A44*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E56F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BCC48 003B9A48*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E56F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BCC4C 003B9A4C*/ PPC::Runtime::ASM::fadd(context->f1, context->f2, context->f1);
/*803BCC50 003B9A50*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803BCC54 003B9A54*/ PPC::Runtime::ASM::ble(.L_803BCC94);
/*803BCC58 003B9A58*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*803BCC5C 003B9A5C*/ PPC::Runtime::ASM::ble(.L_803BCC90);
/*803BCC60 003B9A60*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x14);
/*803BCC64 003B9A64*/ PPC::Runtime::ASM::bne(.L_803BCC70);
/*803BCC68 003B9A68*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803BCC6C 003B9A6C*/ PPC::Runtime::ASM::b(.L_803BCC90);
RUNTIME_PPC_JUMP_LABEL(.L_803BCC70, 0x803BCC70) //this is a jump label
/*803BCC70 003B9A70*/ PPC::Runtime::ASM::subfic(context->r0, context->r7, 0x34);
/*803BCC74 003B9A74*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803BCC78 003B9A78*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*803BCC7C 003B9A7C*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r0);
/*803BCC80 003B9A80*/ PPC::Runtime::ASM::cmplw(context->r0, context->r6);
/*803BCC84 003B9A84*/ PPC::Runtime::ASM::bge(.L_803BCC8C);
/*803BCC88 003B9A88*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803BCC8C, 0x803BCC8C) //this is a jump label
/*803BCC8C 003B9A8C*/ PPC::Runtime::ASM::mr(context->r6, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803BCC90, 0x803BCC90) //this is a jump label
/*803BCC90 003B9A90*/ PPC::Runtime::ASM::andc(context->r6, context->r6, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_803BCC94, 0x803BCC94) //this is a jump label
/*803BCC94 003B9A94*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BCC98 003B9A98*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803BCC9C 003B9A9C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803BCCA0, 0x803BCCA0) //this is a jump label
/*803BCCA0 003B9AA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803BCCA4 003B9AA4*/ PPC::Runtime::ASM::blr();
}