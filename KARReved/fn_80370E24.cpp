//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80297B8C.hpp"



void fn_80370E24(PPC::Runtime::GCContext* context)
{
/*80370E24 0036DC24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80370E28 0036DC28*/ PPC::Runtime::ASM::mflr(context->r0);
/*80370E2C 0036DC2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80370E30 0036DC30*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80370E34 0036DC34*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80370E38 0036DC38*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80370E3C 0036DC3C*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80370E40 0036DC40*/ PPC::Runtime::ASM::addi(context->r30, context->r27, 0xc);
/*80370E44 0036DC44*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80370E48 0036DC48*/ PPC::Runtime::ASM::b(.L_80370EBC);
RUNTIME_PPC_JUMP_LABEL(.L_80370E4C, 0x80370E4C) //this is a jump label
/*80370E4C 0036DC4C*/ PPC::Runtime::ASM::mr(context->r12, context->r28);
/*80370E50 0036DC50*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x8);
/*80370E54 0036DC54*/ PPC::Runtime::ASM::bl(fn_803AD738);
/*80370E58 0036DC58*/ PPC::Runtime::ASM::nop();
/* 80370E5C 0036DC5C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80370E60 0036DC60*/ PPC::Runtime::ASM::beq(.L_80370EB8);
/*80370E64 0036DC64*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80370E68 0036DC68*/ PPC::Runtime::ASM::b(.L_80370E88);
RUNTIME_PPC_JUMP_LABEL(.L_80370E6C, 0x80370E6C) //this is a jump label
/*80370E6C 0036DC6C*/ PPC::Runtime::ASM::mr(context->r12, context->r28);
/*80370E70 0036DC70*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*80370E74 0036DC74*/ PPC::Runtime::ASM::bl(fn_803AD738);
/*80370E78 0036DC78*/ PPC::Runtime::ASM::nop();
/* 80370E7C 0036DC7C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80370E80 0036DC80*/ PPC::Runtime::ASM::beq(.L_80370E90);
/*80370E84 0036DC84*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80370E88, 0x80370E88) //this is a jump label
/*80370E88 0036DC88*/ PPC::Runtime::ASM::cmplw(context->r31, context->r30);
/*80370E8C 0036DC8C*/ PPC::Runtime::ASM::bne(.L_80370E6C);
RUNTIME_PPC_JUMP_LABEL(.L_80370E90, 0x80370E90) //this is a jump label
/*80370E90 0036DC90*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80370E94 0036DC94*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*80370E98 0036DC98*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*80370E9C 0036DC9C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*80370EA0 0036DCA0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80370EA4 0036DCA4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*80370EA8 0036DCA8*/ PPC::Runtime::ASM::bl(fn_80297B8C);
/*80370EAC 0036DCAC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80370EB0 0036DCB0*/ PPC::Runtime::ASM::cmplw(context->r29, context->r30);
/*80370EB4 0036DCB4*/ PPC::Runtime::ASM::beq(.L_80370EC4);
RUNTIME_PPC_JUMP_LABEL(.L_80370EB8, 0x80370EB8) //this is a jump label
/*80370EB8 0036DCB8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80370EBC, 0x80370EBC) //this is a jump label
/*80370EBC 0036DCBC*/ PPC::Runtime::ASM::cmplw(context->r29, context->r30);
/*80370EC0 0036DCC0*/ PPC::Runtime::ASM::bne(.L_80370E4C);
RUNTIME_PPC_JUMP_LABEL(.L_80370EC4, 0x80370EC4) //this is a jump label
/*80370EC4 0036DCC4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80370EC8 0036DCC8*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80370ECC 0036DCCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80370ED0 0036DCD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80370ED4 0036DCD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80370ED8 0036DCD8*/ PPC::Runtime::ASM::blr();
}