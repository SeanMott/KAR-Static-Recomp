//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800550BC.hpp"
#include "fn_8017697C.hpp"
#include "fn_801778B0.hpp"
#include "fn_80172294.hpp"
#include "fn_80144A1C.hpp"
#include "fn_80146A90.hpp"
#include "fn_80177508.hpp"



void fn_80173AF4(PPC::Runtime::GCContext* context)
{
/*80173AF4 001708F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80173AF8 001708F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80173AFC 001708FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80173B00 00170900*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80173B04 00170904*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80173B08 00170908*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc8, context->r3));
/*80173B0C 0017090C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80173B10 00170910*/ PPC::Runtime::ASM::beq(.L_80173BF8);
/*80173B14 00170914*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80173B18 00170918*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*80173B1C 0017091C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80173B20 00170920*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80173B24 00170924*/ PPC::Runtime::ASM::beq(.L_80173BF0);
/*80173B28 00170928*/ PPC::Runtime::ASM::bge(.L_80173BF8);
/*80173B2C 0017092C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80173B30 00170930*/ PPC::Runtime::ASM::bge(.L_80173B38);
/*80173B34 00170934*/ PPC::Runtime::ASM::b(.L_80173BF8);
RUNTIME_PPC_JUMP_LABEL(.L_80173B38, 0x80173B38) //this is a jump label
/*80173B38 00170938*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*80173B3C 0017093C*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*80173B40 00170940*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r31));
/*80173B44 00170944*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80173B48 00170948*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x72, context->r31));
/*80173B4C 0017094C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80173B50 00170950*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*80173B54 00170954*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80173B58 00170958*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80173B5C 0017095C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*80173B60 00170960*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80173B64 00170964*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80173B68 00170968*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*80173B6C 0017096C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80173B70 00170970*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80173B74 00170974*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80173B78 00170978*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*80173B7C 0017097C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80173B80 00170980*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80173B84 00170984*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80173B88 00170988*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*80173B8C 0017098C*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80173B90 00170990*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80173B94 00170994*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80173B98 00170998*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80173B9C 0017099C*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*80173BA0 001709A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80173BA4 001709A4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*80173BA8 001709A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80173BAC 001709AC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*80173BB0 001709B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80173BB4 001709B4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80173BB8 001709B8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80173BBC 001709BC*/ PPC::Runtime::ASM::bl(fn_8017697C);
/*80173BC0 001709C0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80173BC4 001709C4*/ PPC::Runtime::ASM::bl(fn_801778B0);
/*80173BC8 001709C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80173BCC 001709CC*/ PPC::Runtime::ASM::bl(fn_80172294);
/*80173BD0 001709D0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80173BD4 001709D4*/ PPC::Runtime::ASM::bl(fn_80144A1C);
/*80173BD8 001709D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80173BDC 001709DC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80173BE0 001709E0*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*80173BE4 001709E4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80173BE8 001709E8*/ PPC::Runtime::ASM::bl(fn_80146A90);
/*80173BEC 001709EC*/ PPC::Runtime::ASM::b(.L_80173BF8);
RUNTIME_PPC_JUMP_LABEL(.L_80173BF0, 0x80173BF0) //this is a jump label
/*80173BF0 001709F0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80173BF4 001709F4*/ PPC::Runtime::ASM::bl(fn_80177508);
RUNTIME_PPC_JUMP_LABEL(.L_80173BF8, 0x80173BF8) //this is a jump label
/*80173BF8 001709F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80173BFC 001709FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80173C00 00170A00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80173C04 00170A04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80173C08 00170A08*/ PPC::Runtime::ASM::blr();
}