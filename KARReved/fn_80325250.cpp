//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80289590.hpp"
#include "fn_80289768.hpp"
#include "fn_802897E0.hpp"
#include "fn_80289874.hpp"
#include "fn_802895C8.hpp"
#include "fn_80289768.hpp"



void fn_80325250(PPC::Runtime::GCContext* context)
{
/*80325250 00322050*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80325254 00322054*/ PPC::Runtime::ASM::mflr(context->r0);
/*80325258 00322058*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8032525C 0032205C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80325260 00322060*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80325264 00322064*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80325268 00322068*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8032526C 0032206C*/ PPC::Runtime::ASM::beq(.L_80325340);
/*80325270 00322070*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*80325274 00322074*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80325278 00322078*/ PPC::Runtime::ASM::beq(.L_803252BC);
/*8032527C 0032207C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80325280 00322080*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*80325284 00322084*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80325288 00322088*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8032528C 0032208C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4088 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80325290 00322090*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80325294 00322094*/ PPC::Runtime::ASM::bl(fn_80289590);
/*80325298 00322098*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*8032529C 0032209C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803252A0 003220A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4088 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803252A4 003220A4*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*803252A8 003220A8*/ PPC::Runtime::ASM::bl(fn_80289768);
/*803252AC 003220AC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803252B0 003220B0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803252B4 003220B4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*803252B8 003220B8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803252BC, 0x803252BC) //this is a jump label
/*803252BC 003220BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803252C0 003220C0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803252C4 003220C4*/ PPC::Runtime::ASM::beq(.L_80325340);
/*803252C8 003220C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803252CC 003220CC*/ PPC::Runtime::ASM::bl(fn_802897E0);
/* 803252D0 003220D0  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803252D4 003220D4*/ PPC::Runtime::ASM::bne(.L_803252E8);
/*803252D8 003220D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803252DC 003220DC*/ PPC::Runtime::ASM::bl(fn_80289874);
/* 803252E0 003220E0  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803252E4 003220E4*/ PPC::Runtime::ASM::beq(.L_80325340);
RUNTIME_PPC_JUMP_LABEL(.L_803252E8, 0x803252E8) //this is a jump label
/*803252E8 003220E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803252EC 003220EC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803252F0 003220F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803252F4 003220F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803252F8 003220F8*/ PPC::Runtime::ASM::beq(.L_80325330);
/*803252FC 003220FC*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80325300 00322100*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4088 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80325304 00322104*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E408C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80325308 00322108*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*8032530C 0032210C*/ PPC::Runtime::ASM::bl(fn_802895C8);
/*80325310 00322110*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80325314 00322114*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80325318 00322118*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4090 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8032531C 0032211C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80325320 00322120*/ PPC::Runtime::ASM::bl(fn_80289768);
/*80325324 00322124*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80325328 00322128*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8032532C 0032212C*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
RUNTIME_PPC_JUMP_LABEL(.L_80325330, 0x80325330) //this is a jump label
/*80325330 00322130*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80325334 00322134*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80325338 00322138*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8032533C 0032213C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80325340, 0x80325340) //this is a jump label
/*80325340 00322140*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80325344 00322144*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80325348 00322148*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8032534C 0032214C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80325350 00322150*/ PPC::Runtime::ASM::blr();
}