//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "__OSGetSystemTime.hpp"
#include "PPCMtdec.hpp"
#include "PPCMtdec.hpp"
#include "PPCMtdec.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_OSCancelAlarm(PPC::Runtime::GCContext* context)
{
/*803D31C4 003CFFC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D31C8 003CFFC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D31CC 003CFFCC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803D31D0 003CFFD0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D31D4 003CFFD4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D31D8 003CFFD8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803D31DC 003CFFDC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D31E0 003CFFE0*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803D31E4 003CFFE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803D31E8 003CFFE8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803D31EC 003CFFEC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D31F0 003CFFF0*/ PPC::Runtime::ASM::bne(.L_803D3200);
/*803D31F4 003CFFF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803D31F8 003CFFF8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803D31FC 003CFFFC*/ PPC::Runtime::ASM::b(.L_803D32C4);
RUNTIME_PPC_JUMP_LABEL(.L_803D3200, 0x803D3200) //this is a jump label
/*803D3200 003D0000*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*803D3204 003D0004*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*803D3208 003D0008*/ PPC::Runtime::ASM::bne(.L_803D321C);
/*803D320C 003D000C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*803D3210 003D0010*/ PPC::Runtime::ASM::li(context->r3, AlarmQueue_805DDEA8 @ Get_MemoryOffset_SDA21);
/*803D3214 003D0014*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803D3218 003D0018*/ PPC::Runtime::ASM::b(.L_803D3224);
RUNTIME_PPC_JUMP_LABEL(.L_803D321C, 0x803D321C) //this is a jump label
/*803D321C 003D001C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*803D3220 003D0020*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_803D3224, 0x803D3224) //this is a jump label
/*803D3224 003D0024*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*803D3228 003D0028*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803D322C 003D002C*/ PPC::Runtime::ASM::beq(.L_803D3238);
/*803D3230 003D0030*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803D3234 003D0034*/ PPC::Runtime::ASM::b(.L_803D32B4);
RUNTIME_PPC_JUMP_LABEL(.L_803D3238, 0x803D3238) //this is a jump label
/*803D3238 003D0038*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*803D323C 003D003C*/ PPC::Runtime::ASM::stw(context->r29, AlarmQueue_805DDEA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D3240 003D0040*/ PPC::Runtime::ASM::beq(.L_803D32B4);
/*803D3244 003D0044*/ PPC::Runtime::ASM::bl(__OSGetSystemTime);
/*803D3248 003D0048*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*803D324C 003D004C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803D3250 003D0050*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*803D3254 003D0054*/ PPC::Runtime::ASM::xoris(context->r5, context->r7, 0x8000);
/*803D3258 003D0058*/ PPC::Runtime::ASM::subfc(context->r8, context->r4, context->r6);
/*803D325C 003D005C*/ PPC::Runtime::ASM::subfe(context->r0, context->r3, context->r0);
/*803D3260 003D0060*/ PPC::Runtime::ASM::xoris(context->r6, context->r0, 0x8000);
/*803D3264 003D0064*/ PPC::Runtime::ASM::subfc(context->r0, context->r7, context->r8);
/*803D3268 003D0068*/ PPC::Runtime::ASM::subfe(context->r5, context->r5, context->r6);
/*803D326C 003D006C*/ PPC::Runtime::ASM::subfe(context->r5, context->r6, context->r6);
/*803D3270 003D0070*/ PPC::Runtime::ASM::neg.(context->r5, context->r5);
/*803D3274 003D0074*/ PPC::Runtime::ASM::beq(.L_803D3284);
/*803D3278 003D0078*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D327C 003D007C*/ PPC::Runtime::ASM::bl(PPCMtdec);
/*803D3280 003D0080*/ PPC::Runtime::ASM::b(.L_803D32B4);
RUNTIME_PPC_JUMP_LABEL(.L_803D3284, 0x803D3284) //this is a jump label
/*803D3284 003D0084*/ PPC::Runtime::ASM::lis(context->r4, 0x8000);
/*803D3288 003D0088*/ PPC::Runtime::ASM::xoris(context->r3, context->r7, 0x8000);
/*803D328C 003D008C*/ PPC::Runtime::ASM::subfc(context->r0, context->r4, context->r8);
/*803D3290 003D0090*/ PPC::Runtime::ASM::subfe(context->r3, context->r3, context->r6);
/*803D3294 003D0094*/ PPC::Runtime::ASM::subfe(context->r3, context->r6, context->r6);
/*803D3298 003D0098*/ PPC::Runtime::ASM::neg.(context->r3, context->r3);
/*803D329C 003D009C*/ PPC::Runtime::ASM::beq(.L_803D32AC);
/*803D32A0 003D00A0*/ PPC::Runtime::ASM::mr(context->r3, context->r8);
/*803D32A4 003D00A4*/ PPC::Runtime::ASM::bl(PPCMtdec);
/*803D32A8 003D00A8*/ PPC::Runtime::ASM::b(.L_803D32B4);
RUNTIME_PPC_JUMP_LABEL(.L_803D32AC, 0x803D32AC) //this is a jump label
/*803D32AC 003D00AC*/ PPC::Runtime::ASM::subi(context->r3, context->r4, 0x1);
/*803D32B0 003D00B0*/ PPC::Runtime::ASM::bl(PPCMtdec);
RUNTIME_PPC_JUMP_LABEL(.L_803D32B4, 0x803D32B4) //this is a jump label
/*803D32B4 003D00B4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803D32B8 003D00B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803D32BC 003D00BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803D32C0 003D00C0*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_803D32C4, 0x803D32C4) //this is a jump label
/*803D32C4 003D00C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803D32C8 003D00C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D32CC 003D00CC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D32D0 003D00D0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D32D4 003D00D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803D32D8 003D00D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D32DC 003D00DC*/ PPC::Runtime::ASM::blr();
}