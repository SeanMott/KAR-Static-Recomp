//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800E2BD0(PPC::Runtime::GCContext* context)
{
/*800E2BD0 000DF9D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800E2BD4 000DF9D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E2BD8 000DF9D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800E2BDC 000DF9DC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800E2BE0 000DF9E0*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*800E2BE4 000DF9E4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*800E2BE8 000DF9E8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_FLOAT_4 @ Get_MemoryOffset_HighBit);
/*800E2BEC 000DF9EC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r27));
/*800E2BF0 000DF9F0*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*800E2BF4 000DF9F4*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*800E2BF8 000DF9F8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, STRUCT_FLOAT_4 @ Get_MemoryOffset_LowBit);
/*800E2BFC 000DF9FC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800E2C00 000DFA00*/ PPC::Runtime::ASM::bne(.L_800E2C14);
/*800E2C04 000DFA04*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x48);
/*800E2C08 000DFA08*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x54);
/*800E2C0C 000DFA0C*/ PPC::Runtime::ASM::li(context->r4, 0x1d);
/*800E2C10 000DFA10*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E2C14, 0x800E2C14) //this is a jump label
/*800E2C14 000DFA14*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*800E2C18 000DFA18*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800E2C1C 000DFA1C*/ PPC::Runtime::ASM::blt(.L_800E2C30);
/*800E2C20 000DFA20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800E2C24 000DFA24*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*800E2C28 000DFA28*/ PPC::Runtime::ASM::bge(.L_800E2C30);
/*800E2C2C 000DFA2C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800E2C30, 0x800E2C30) //this is a jump label
/*800E2C30 000DFA30*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800E2C34 000DFA34*/ PPC::Runtime::ASM::bne(.L_800E2C48);
/*800E2C38 000DFA38*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x48);
/*800E2C3C 000DFA3C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x60);
/*800E2C40 000DFA40*/ PPC::Runtime::ASM::li(context->r4, 0x1e);
/*800E2C44 000DFA44*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E2C48, 0x800E2C48) //this is a jump label
/*800E2C48 000DFA48*/ PPC::Runtime::ASM::mulli(context->r3, context->r28, 0x1c);
/*800E2C4C 000DFA4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r27));
/*800E2C50 000DFA50*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x18);
/*800E2C54 000DFA54*/ PPC::Runtime::ASM::lbzx(context->r3, context->r4, context->r5);
/*800E2C58 000DFA58*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 1, 24);
/*800E2C5C 000DFA5C*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*800E2C60 000DFA60*/ PPC::Runtime::ASM::beq(.L_800E2C6C);
/*800E2C64 000DFA64*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r29, 7, 24, 24);
/*800E2C68 000DFA68*/ PPC::Runtime::ASM::stbx(context->r3, context->r4, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_800E2C6C, 0x800E2C6C) //this is a jump label
/*800E2C6C 000DFA6C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800E2C70 000DFA70*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800E2C74 000DFA74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800E2C78 000DFA78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E2C7C 000DFA7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800E2C80 000DFA80*/ PPC::Runtime::ASM::blr();
}