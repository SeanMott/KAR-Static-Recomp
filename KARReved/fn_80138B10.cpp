//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_sAddAnimAll.hpp"
#include "fn_800550BC.hpp"



void fn_80138B10(PPC::Runtime::GCContext* context)
{
/*80138B10 00135910*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80138B14 00135914*/ PPC::Runtime::ASM::mflr(context->r0);
/*80138B18 00135918*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80138B1C 0013591C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80138B20 00135920*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*80138B24 00135924*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80138B28 00135928*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80138B2C 0013592C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80138B30 00135930*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80138B34 00135934*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80138B38 00135938*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80138B3C 0013593C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80138B40 00135940*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80138B44 00135944*/ PPC::Runtime::ASM::bl(fn_HSD_JObjRemoveAnimAll);
/*80138B48 00135948*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80138B4C 0013594C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80138B50 00135950*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*80138B54 00135954*/ PPC::Runtime::ASM::bl(fn_sAddAnimAll);
/*80138B58 00135958*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*80138B5C 0013595C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80138B60 00135960*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*80138B64 00135964*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80138B68 00135968*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80138B6C 0013596C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80138B70 00135970*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80138B74 00135974*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*80138B78 00135978*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80138B7C 0013597C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80138B80 00135980*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80138B84 00135984*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80138B88 00135988*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80138B8C 0013598C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80138B90 00135990*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80138B94 00135994*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80138B98 00135998*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80138B9C 0013599C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80138BA0 001359A0*/ PPC::Runtime::ASM::blr();
}