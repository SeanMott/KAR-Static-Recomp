//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_floor(PPC::Runtime::GCContext* context)
{
/*803BCDA4 003B9BA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803BCDA8 003B9BA8*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BCDAC 003B9BAC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BCDB0 003B9BB0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803BCDB4 003B9BB4*/ PPC::Runtime::ASM::extrwi(context->r3, context->r5, 11, 1);
/*803BCDB8 003B9BB8*/ PPC::Runtime::ASM::subi(context->r7, context->r3, 0x3ff);
/*803BCDBC 003B9BBC*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x14);
/*803BCDC0 003B9BC0*/ PPC::Runtime::ASM::bge(.L_803BCE58);
/*803BCDC4 003B9BC4*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*803BCDC8 003B9BC8*/ PPC::Runtime::ASM::bge(.L_803BCE0C);
/*803BCDCC 003B9BCC*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5708 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BCDD0 003B9BD0*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BCDD4 003B9BD4*/ PPC::Runtime::ASM::fadd(context->f1, context->f2, context->f1);
/*803BCDD8 003B9BD8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803BCDDC 003B9BDC*/ PPC::Runtime::ASM::ble(.L_803BCED8);
/*803BCDE0 003B9BE0*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*803BCDE4 003B9BE4*/ PPC::Runtime::ASM::blt(.L_803BCDF4);
/*803BCDE8 003B9BE8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*803BCDEC 003B9BEC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803BCDF0 003B9BF0*/ PPC::Runtime::ASM::b(.L_803BCED8);
RUNTIME_PPC_JUMP_LABEL(.L_803BCDF4, 0x803BCDF4) //this is a jump label
/*803BCDF4 003B9BF4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r5, 1);
/*803BCDF8 003B9BF8*/ PPC::Runtime::ASM::or.(context->r0, context->r0, context->r6);
/*803BCDFC 003B9BFC*/ PPC::Runtime::ASM::beq(.L_803BCED8);
/*803BCE00 003B9C00*/ PPC::Runtime::ASM::lis(context->r5, 0xbff0);
/*803BCE04 003B9C04*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*803BCE08 003B9C08*/ PPC::Runtime::ASM::b(.L_803BCED8);
RUNTIME_PPC_JUMP_LABEL(.L_803BCE0C, 0x803BCE0C) //this is a jump label
/*803BCE0C 003B9C0C*/ PPC::Runtime::ASM::lis(context->r3, 0x10);
/*803BCE10 003B9C10*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803BCE14 003B9C14*/ PPC::Runtime::ASM::sraw(context->r4, context->r0, context->r7);
/*803BCE18 003B9C18*/ PPC::Runtime::ASM::and(context->r0, context->r5, context->r4);
/*803BCE1C 003B9C1C*/ PPC::Runtime::ASM::or.(context->r0, context->r6, context->r0);
/*803BCE20 003B9C20*/ PPC::Runtime::ASM::bne(.L_803BCE28);
/*803BCE24 003B9C24*/ PPC::Runtime::ASM::b(.L_803BCEE4);
RUNTIME_PPC_JUMP_LABEL(.L_803BCE28, 0x803BCE28) //this is a jump label
/*803BCE28 003B9C28*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5708 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BCE2C 003B9C2C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BCE30 003B9C30*/ PPC::Runtime::ASM::fadd(context->f1, context->f2, context->f1);
/*803BCE34 003B9C34*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803BCE38 003B9C38*/ PPC::Runtime::ASM::ble(.L_803BCED8);
/*803BCE3C 003B9C3C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*803BCE40 003B9C40*/ PPC::Runtime::ASM::bge(.L_803BCE4C);
/*803BCE44 003B9C44*/ PPC::Runtime::ASM::sraw(context->r0, context->r3, context->r7);
/*803BCE48 003B9C48*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803BCE4C, 0x803BCE4C) //this is a jump label
/*803BCE4C 003B9C4C*/ PPC::Runtime::ASM::andc(context->r5, context->r5, context->r4);
/*803BCE50 003B9C50*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*803BCE54 003B9C54*/ PPC::Runtime::ASM::b(.L_803BCED8);
RUNTIME_PPC_JUMP_LABEL(.L_803BCE58, 0x803BCE58) //this is a jump label
/*803BCE58 003B9C58*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x33);
/*803BCE5C 003B9C5C*/ PPC::Runtime::ASM::ble(.L_803BCE70);
/*803BCE60 003B9C60*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x400);
/*803BCE64 003B9C64*/ PPC::Runtime::ASM::bne(.L_803BCEE4);
/*803BCE68 003B9C68*/ PPC::Runtime::ASM::fadd(context->f1, context->f1, context->f1);
/*803BCE6C 003B9C6C*/ PPC::Runtime::ASM::b(.L_803BCEE4);
RUNTIME_PPC_JUMP_LABEL(.L_803BCE70, 0x803BCE70) //this is a jump label
/*803BCE70 003B9C70*/ PPC::Runtime::ASM::subi(context->r0, context->r7, 0x14);
/*803BCE74 003B9C74*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*803BCE78 003B9C78*/ PPC::Runtime::ASM::srw(context->r4, context->r3, context->r0);
/*803BCE7C 003B9C7C*/ PPC::Runtime::ASM::and.(context->r0, context->r6, context->r4);
/*803BCE80 003B9C80*/ PPC::Runtime::ASM::bne(.L_803BCE88);
/*803BCE84 003B9C84*/ PPC::Runtime::ASM::b(.L_803BCEE4);
RUNTIME_PPC_JUMP_LABEL(.L_803BCE88, 0x803BCE88) //this is a jump label
/*803BCE88 003B9C88*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5708 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BCE8C 003B9C8C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BCE90 003B9C90*/ PPC::Runtime::ASM::fadd(context->f1, context->f2, context->f1);
/*803BCE94 003B9C94*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803BCE98 003B9C98*/ PPC::Runtime::ASM::ble(.L_803BCED8);
/*803BCE9C 003B9C9C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*803BCEA0 003B9CA0*/ PPC::Runtime::ASM::bge(.L_803BCED4);
/*803BCEA4 003B9CA4*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x14);
/*803BCEA8 003B9CA8*/ PPC::Runtime::ASM::bne(.L_803BCEB4);
/*803BCEAC 003B9CAC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803BCEB0 003B9CB0*/ PPC::Runtime::ASM::b(.L_803BCED4);
RUNTIME_PPC_JUMP_LABEL(.L_803BCEB4, 0x803BCEB4) //this is a jump label
/*803BCEB4 003B9CB4*/ PPC::Runtime::ASM::subfic(context->r0, context->r7, 0x34);
/*803BCEB8 003B9CB8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803BCEBC 003B9CBC*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*803BCEC0 003B9CC0*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r0);
/*803BCEC4 003B9CC4*/ PPC::Runtime::ASM::cmplw(context->r0, context->r6);
/*803BCEC8 003B9CC8*/ PPC::Runtime::ASM::bge(.L_803BCED0);
/*803BCECC 003B9CCC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803BCED0, 0x803BCED0) //this is a jump label
/*803BCED0 003B9CD0*/ PPC::Runtime::ASM::mr(context->r6, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803BCED4, 0x803BCED4) //this is a jump label
/*803BCED4 003B9CD4*/ PPC::Runtime::ASM::andc(context->r6, context->r6, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_803BCED8, 0x803BCED8) //this is a jump label
/*803BCED8 003B9CD8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BCEDC 003B9CDC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803BCEE0 003B9CE0*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803BCEE4, 0x803BCEE4) //this is a jump label
/*803BCEE4 003B9CE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803BCEE8 003B9CE8*/ PPC::Runtime::ASM::blr();
}