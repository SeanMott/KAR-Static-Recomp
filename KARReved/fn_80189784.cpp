//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80188888.hpp"
#include "fn_80189084.hpp"



void fn_80189784(PPC::Runtime::GCContext* context)
{
/*80189784 00186584*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80189788 00186588*/ PPC::Runtime::ASM::mflr(context->r0);
/*8018978C 0018658C*/ PPC::Runtime::ASM::mr(context->r8, context->r3);
/*80189790 00186590*/ PPC::Runtime::ASM::mr(context->r7, context->r4);
/*80189794 00186594*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80189798 00186598*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33, context->r3));
/* 8018979C 0018659C  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801897A0 001865A0*/ PPC::Runtime::ASM::beq(.L_801897AC);
/*801897A4 001865A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r8));
/*801897A8 001865A8*/ PPC::Runtime::ASM::b(.L_801897B4);
RUNTIME_PPC_JUMP_LABEL(.L_801897AC, 0x801897AC) //this is a jump label
/*801897AC 001865AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r8));
/*801897B0 001865B0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_801897B4, 0x801897B4) //this is a jump label
/*801897B4 001865B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r8));
/*801897B8 001865B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33, context->r7));
/* 801897BC 001865BC  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801897C0 001865C0*/ PPC::Runtime::ASM::beq(.L_801897CC);
/*801897C4 001865C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r7));
/*801897C8 001865C8*/ PPC::Runtime::ASM::b(.L_801897D4);
RUNTIME_PPC_JUMP_LABEL(.L_801897CC, 0x801897CC) //this is a jump label
/*801897CC 001865CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r7));
/*801897D0 001865D0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_801897D4, 0x801897D4) //this is a jump label
/*801897D4 001865D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r7));
/*801897D8 001865D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r8));
/* 801897DC 001865DC  54 03 EF FF */ extrwi. context->r3 , context->r0 , 1 , 28
/*801897E0 001865E0*/ PPC::Runtime::ASM::bne(.L_801897F0);
/*801897E4 001865E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r7));
/* 801897E8 001865E8  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*801897EC 001865EC*/ PPC::Runtime::ASM::beq(.L_8018982C);
RUNTIME_PPC_JUMP_LABEL(.L_801897F0, 0x801897F0) //this is a jump label
/*801897F0 001865F0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801897F4 001865F4*/ PPC::Runtime::ASM::beq(.L_80189804);
/*801897F8 001865F8*/ PPC::Runtime::ASM::mr(context->r0, context->r8);
/*801897FC 001865FC*/ PPC::Runtime::ASM::mr(context->r8, context->r7);
/*80189800 00186600*/ PPC::Runtime::ASM::mr(context->r7, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80189804, 0x80189804) //this is a jump label
/*80189804 00186604*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r7));
/*80189808 00186608*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x50);
/*8018980C 0018660C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r8));
/*80189810 00186610*/ PPC::Runtime::ASM::addi(context->r4, context->r7, 0x40);
/*80189814 00186614*/ PPC::Runtime::ASM::addi(context->r5, context->r8, 0x50);
/*80189818 00186618*/ PPC::Runtime::ASM::addi(context->r6, context->r8, 0x40);
/*8018981C 0018661C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x5c);
/*80189820 00186620*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x5c);
/*80189824 00186624*/ PPC::Runtime::ASM::bl(fn_80188888);
/*80189828 00186628*/ PPC::Runtime::ASM::b(.L_80189850);
RUNTIME_PPC_JUMP_LABEL(.L_8018982C, 0x8018982C) //this is a jump label
/*8018982C 0018662C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r7));
/*80189830 00186630*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x50);
/*80189834 00186634*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r8));
/*80189838 00186638*/ PPC::Runtime::ASM::addi(context->r4, context->r7, 0x40);
/*8018983C 0018663C*/ PPC::Runtime::ASM::addi(context->r5, context->r8, 0x50);
/*80189840 00186640*/ PPC::Runtime::ASM::addi(context->r6, context->r8, 0x40);
/*80189844 00186644*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x5c);
/*80189848 00186648*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x5c);
/*8018984C 0018664C*/ PPC::Runtime::ASM::bl(fn_80189084);
RUNTIME_PPC_JUMP_LABEL(.L_80189850, 0x80189850) //this is a jump label
/*80189850 00186650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80189854 00186654*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80189858 00186658*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8018985C 0018665C*/ PPC::Runtime::ASM::blr();
}