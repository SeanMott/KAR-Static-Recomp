//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___GXSetSUTexRegs.hpp"
#include "fn___GXUpdateBPMask.hpp"
#include "fn___GXSetGenMode.hpp"
#include "fn_803CA848.hpp"
#include "fn___GXSetVAT.hpp"
#include "fn___GXCalculateVLim.hpp"



void fn___GXSetDirtyState(PPC::Runtime::GCContext* context)
{
/*803CC214 003C9014*/ PPC::Runtime::ASM::mflr(context->r0);
/*803CC218 003C9018*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803CC21C 003C901C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*803CC220 003C9020*/ PPC::Runtime::ASM::lwz(context->r3, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CC224 003C9024*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r3));
/* 803CC228 003C9028  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*803CC22C 003C902C*/ PPC::Runtime::ASM::beq(.L_803CC234);
/*803CC230 003C9030*/ PPC::Runtime::ASM::bl(fn___GXSetSUTexRegs);
RUNTIME_PPC_JUMP_LABEL(.L_803CC234, 0x803CC234) //this is a jump label
/*803CC234 003C9034*/ PPC::Runtime::ASM::lwz(context->r3, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CC238 003C9038*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r3));
/*803CC23C 003C903C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*803CC240 003C9040*/ PPC::Runtime::ASM::beq(.L_803CC248);
/*803CC244 003C9044*/ PPC::Runtime::ASM::bl(fn___GXUpdateBPMask);
RUNTIME_PPC_JUMP_LABEL(.L_803CC248, 0x803CC248) //this is a jump label
/*803CC248 003C9048*/ PPC::Runtime::ASM::lwz(context->r3, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CC24C 003C904C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r3));
/*803CC250 003C9050*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*803CC254 003C9054*/ PPC::Runtime::ASM::beq(.L_803CC25C);
/*803CC258 003C9058*/ PPC::Runtime::ASM::bl(fn___GXSetGenMode);
RUNTIME_PPC_JUMP_LABEL(.L_803CC25C, 0x803CC25C) //this is a jump label
/*803CC25C 003C905C*/ PPC::Runtime::ASM::lwz(context->r3, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CC260 003C9060*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r3));
/*803CC264 003C9064*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 28, 28);
/*803CC268 003C9068*/ PPC::Runtime::ASM::beq(.L_803CC270);
/*803CC26C 003C906C*/ PPC::Runtime::ASM::bl(fn_803CA848);
RUNTIME_PPC_JUMP_LABEL(.L_803CC270, 0x803CC270) //this is a jump label
/*803CC270 003C9070*/ PPC::Runtime::ASM::lwz(context->r3, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CC274 003C9074*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r3));
/*803CC278 003C9078*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 27, 27);
/*803CC27C 003C907C*/ PPC::Runtime::ASM::beq(.L_803CC284);
/*803CC280 003C9080*/ PPC::Runtime::ASM::bl(fn___GXSetVAT);
RUNTIME_PPC_JUMP_LABEL(.L_803CC284, 0x803CC284) //this is a jump label
/*803CC284 003C9084*/ PPC::Runtime::ASM::lwz(context->r3, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CC288 003C9088*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r3));
/*803CC28C 003C908C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 27, 28);
/*803CC290 003C9090*/ PPC::Runtime::ASM::beq(.L_803CC298);
/*803CC294 003C9094*/ PPC::Runtime::ASM::bl(fn___GXCalculateVLim);
RUNTIME_PPC_JUMP_LABEL(.L_803CC298, 0x803CC298) //this is a jump label
/*803CC298 003C9098*/ PPC::Runtime::ASM::lwz(context->r3, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CC29C 003C909C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803CC2A0 003C90A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r3));
/*803CC2A4 003C90A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803CC2A8 003C90A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*803CC2AC 003C90AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803CC2B0 003C90B0*/ PPC::Runtime::ASM::blr();
}