//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXLoadTexMtxImm(PPC::Runtime::GCContext* context)
{
/*803D0814 003CD614*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x40);
/*803D0818 003CD618*/ PPC::Runtime::ASM::blt(.L_803D082C);
/*803D081C 003CD61C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x40);
/*803D0820 003CD620*/ PPC::Runtime::ASM::slwi(context->r4, context->r0, 2);
/*803D0824 003CD624*/ PPC::Runtime::ASM::addi(context->r7, context->r4, 0x500);
/*803D0828 003CD628*/ PPC::Runtime::ASM::b(.L_803D0830);
RUNTIME_PPC_JUMP_LABEL(.L_803D082C, 0x803D082C) //this is a jump label
/*803D082C 003CD62C*/ PPC::Runtime::ASM::slwi(context->r7, context->r4, 2);
RUNTIME_PPC_JUMP_LABEL(.L_803D0830, 0x803D0830) //this is a jump label
/*803D0830 003CD630*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x1);
/*803D0834 003CD634*/ PPC::Runtime::ASM::bne(.L_803D0840);
/*803D0838 003CD638*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*803D083C 003CD63C*/ PPC::Runtime::ASM::b(.L_803D0844);
RUNTIME_PPC_JUMP_LABEL(.L_803D0840, 0x803D0840) //this is a jump label
/*803D0840 003CD640*/ PPC::Runtime::ASM::li(context->r4, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_803D0844, 0x803D0844) //this is a jump label
/*803D0844 003CD644*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*803D0848 003CD648*/ PPC::Runtime::ASM::slwi(context->r6, context->r0, 16);
/*803D084C 003CD64C*/ PPC::Runtime::ASM::li(context->r0, 0x10);
/*803D0850 003CD650*/ PPC::Runtime::ASM::lis(context->r4, 0xcc01);
/*803D0854 003CD654*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*803D0858 003CD658*/ PPC::Runtime::ASM::or(context->r0, context->r7, context->r6);
/*803D085C 003CD65C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*803D0860 003CD660*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*803D0864 003CD664*/ PPC::Runtime::ASM::bne(.L_803D08A0);
/*803D0868 003CD668*/ PPC::Runtime::ASM::addi(context->r4, context->r4, -0x8000);
/*803D086C 003CD66C*/ PPC::Runtime::ASM::psq_l(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3)0, context->qr0);
/*803D0870 003CD670*/ PPC::Runtime::ASM::psq_l(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3)0, context->qr0);
/*803D0874 003CD674*/ PPC::Runtime::ASM::psq_l(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3)0, context->qr0);
/*803D0878 003CD678*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3)0, context->qr0);
/*803D087C 003CD67C*/ PPC::Runtime::ASM::psq_l(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3)0, context->qr0);
/*803D0880 003CD680*/ PPC::Runtime::ASM::psq_l(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3)0, context->qr0);
/*803D0884 003CD684*/ PPC::Runtime::ASM::psq_st(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/*803D0888 003CD688*/ PPC::Runtime::ASM::psq_st(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/*803D088C 003CD68C*/ PPC::Runtime::ASM::psq_st(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/*803D0890 003CD690*/ PPC::Runtime::ASM::psq_st(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/*803D0894 003CD694*/ PPC::Runtime::ASM::psq_st(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/*803D0898 003CD698*/ PPC::Runtime::ASM::psq_st(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/*803D089C 003CD69C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803D08A0, 0x803D08A0) //this is a jump label
/*803D08A0 003CD6A0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, -0x8000);
/*803D08A4 003CD6A4*/ PPC::Runtime::ASM::psq_l(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3)0, context->qr0);
/*803D08A8 003CD6A8*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3)0, context->qr0);
/*803D08AC 003CD6AC*/ PPC::Runtime::ASM::psq_l(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3)0, context->qr0);
/*803D08B0 003CD6B0*/ PPC::Runtime::ASM::psq_l(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3)0, context->qr0);
/*803D08B4 003CD6B4*/ PPC::Runtime::ASM::psq_st(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/*803D08B8 003CD6B8*/ PPC::Runtime::ASM::psq_st(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/*803D08BC 003CD6BC*/ PPC::Runtime::ASM::psq_st(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/*803D08C0 003CD6C0*/ PPC::Runtime::ASM::psq_st(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/*803D08C4 003CD6C4*/ PPC::Runtime::ASM::blr();
}