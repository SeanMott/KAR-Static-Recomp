//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A0984.hpp"
#include "fn_802A0884.hpp"
#include "fn_802A0884.hpp"



void fn_802A07D8(PPC::Runtime::GCContext* context)
{
/*802A07D8 0029D5D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802A07DC 0029D5DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A07E0 0029D5E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802A07E4 0029D5E4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802A07E8 0029D5E8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*802A07EC 0029D5EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A07F0 0029D5F0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A07F4 0029D5F4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802A07F8 0029D5F8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802A07FC 0029D5FC*/ PPC::Runtime::ASM::bl(fn_802A0984);
/* 802A0800 0029D600  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*802A0804 0029D604*/ PPC::Runtime::ASM::bge(.L_802A0814);
/*802A0808 0029D608*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A080C 0029D60C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802A0810 0029D610*/ PPC::Runtime::ASM::b(.L_802A0864);
RUNTIME_PPC_JUMP_LABEL(.L_802A0814, 0x802A0814) //this is a jump label
/*802A0814 0029D614*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A0818 0029D618*/ PPC::Runtime::ASM::bl(fn_802A0884);
/*802A081C 0029D61C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802A0820 0029D620*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*802A0824 0029D624*/ PPC::Runtime::ASM::blt(.L_802A0844);
/*802A0828 0029D628*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A082C 0029D62C*/ PPC::Runtime::ASM::bl(fn_802A0884);
/*802A0830 0029D630*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xc);
/*802A0834 0029D634*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A0838 0029D638*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*802A083C 0029D63C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r3));
/*802A0840 0029D640*/ PPC::Runtime::ASM::b(.L_802A0864);
RUNTIME_PPC_JUMP_LABEL(.L_802A0844, 0x802A0844) //this is a jump label
/*802A0844 0029D644*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x1);
/*802A0848 0029D648*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*802A084C 0029D64C*/ PPC::Runtime::ASM::mulli(context->r3, context->r31, 0xc);
/*802A0850 0029D650*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A0854 0029D654*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*802A0858 0029D658*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*802A085C 0029D65C*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*802A0860 0029D660*/ PPC::Runtime::ASM::bl(fn_8038B880);
RUNTIME_PPC_JUMP_LABEL(.L_802A0864, 0x802A0864) //this is a jump label
/*802A0864 0029D664*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*802A0868 0029D668*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802A086C 0029D66C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802A0870 0029D670*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A0874 0029D674*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A0878 0029D678*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A087C 0029D67C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802A0880 0029D680*/ PPC::Runtime::ASM::blr();
}