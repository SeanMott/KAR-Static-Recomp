//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80250038(PPC::Runtime::GCContext* context)
{
/*80250038 0024CE38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025003C 0024CE3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80250040 0024CE40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80250044 0024CE44*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1NULL_1 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80250048 0024CE48*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8025004C 0024CE4C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80250050 0024CE50*/ PPC::Runtime::ASM::beq(.L_80250060);
/*80250054 0024CE54*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0x18);
/*80250058 0024CE58*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*8025005C 0024CE5C*/ PPC::Runtime::ASM::b(.L_80250088);
RUNTIME_PPC_JUMP_LABEL(.L_80250060, 0x80250060) //this is a jump label
/*80250060 0024CE60*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B61C8 @ Get_MemoryOffset_HighBit);
/*80250064 0024CE64*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B61C8 @ Get_MemoryOffset_LowBit);
/*80250068 0024CE68*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8025006C 0024CE6C*/ PPC::Runtime::ASM::bl(OSReport);
/*80250070 0024CE70*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B61E4 @ Get_MemoryOffset_HighBit);
/*80250074 0024CE74*/ PPC::Runtime::ASM::li(context->r4, 0xe3);
/*80250078 0024CE78*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B61E4 @ Get_MemoryOffset_LowBit);
/*8025007C 0024CE7C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7378 @ Get_MemoryOffset_SDA21);
/*80250080 0024CE80*/ PPC::Runtime::ASM::bl(fn___assert);
/*80250084 0024CE84*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80250088, 0x80250088) //this is a jump label
/*80250088 0024CE88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025008C 0024CE8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80250090 0024CE90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80250094 0024CE94*/ PPC::Runtime::ASM::blr();
}